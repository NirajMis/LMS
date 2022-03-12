#include<stdio.h>
#include <stdlib.h>
#include <string.h>
struct library {
    char bk_name[30];
    char author[20];
    int price;
    int pages;
};
int main () {
    system("clear");
    struct library l[100];
    char ar_nm[30], bk_nm[30];
    int i, j, keepcount = 0;
    int usernumber;
    char line[500];
    FILE *fptr;
    FILE *file;
    fptr = fopen("database.txt", "a+");
    file = fopen("database.txt", "a+");
    char lastbook[100];
    char userbook[100];
    printf("------------------------------------------------------------\n");
    printf("1) Add Book Information\n");
    printf("2) Get All Books From Library\n");
    printf("3) Total Number Of Books\n");
    printf("3) Exit LMS\n");
    printf("------------------------------------------------------------");
    printf("\nEnter A Number From Above For Doing That Operation :- ");
    scanf("%d", &usernumber);
    printf("------------------------------------------------------------\n");
    if(usernumber == 1){
        printf("Enter The Book Name :- ");
        scanf("%s",l[i].bk_name);
        printf("Enter The Book Author :- ");
        scanf("%s",l[i].author);
        printf("Enter The Book Price :- ");
        scanf("%d",&l[i].price);
        printf("Enter Number Of Pages :- ");
        scanf("%d",&l[i].pages);
        fprintf(fptr, "%s_%s_%d_%d%s", l[i].bk_name, l[i].author, l[i].price, l[i].pages, "\n");
        printf("------------------------------------------------------------\n");
        printf("Successfully Added Book To Database\n");
        printf("------------------------------------------------------------\n");
    } else if(usernumber == 2){
        printf("All Books From Library Are As Follows :-\n");
        printf("------------------------------------------------------------\n");
        while (fgets(line, sizeof(line), file)) {
            strcpy(lastbook, line);
            char *ptr = strtok(lastbook, "_");
            int counterdd = 1;
            while(ptr != NULL){
                if(counterdd==1){
                    printf("Book Name :- %s\n", ptr);
                } else if(counterdd==2){
                    printf("Book Author :- %s\n", ptr);
                } else if(counterdd==3){
                    printf("Book Price :- %s\n", ptr);
                } else if(counterdd==4){
                    printf("No. Of Pages :- %s", ptr);
                }
                ptr = strtok(NULL, "_");
                counterdd++;
            }
            printf("------------------------------------------------------------\n");
        }
    } else if(usernumber==3){
        int counterdd = 1;
        while (fgets(line, sizeof(line), file)) {
            counterdd++;
        }
        printf("Total Number Of Books In Library Is :- %d Books\n", counterdd-1);
        printf("------------------------------------------------------------\n");
    } else if(usernumber==4){
        printf("Exiting The LMS....");
        printf("Coded By Neeraj Mishra");
        printf("------------------------------------------------------------\n");
        fclose(fptr);
        fclose(file);
        exit(0);
    }
    return 0;
}