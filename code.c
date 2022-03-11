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

    printf("1) Add Book Information\n");
    printf("2) Display Book Information\n");
    printf("3) Exit LMS\n");

    printf("Enter A Number From Above For Doing That Operation!!.");
    scanf("%d", &usernumber);

    if(usernumber == 1){
        printf("Enter The Book Name: \n");
        scanf("%s",l[i].bk_name);

        printf("Enter The Book Author: \n");
        scanf("%s",l[i].author);

        printf("Enter The Book Price : \n");
        scanf("%d",&l[i].price);

        printf("Enter Number Of Pages: \n");
        scanf("%d",&l[i].pages);

        fprintf(fptr, "%s_%s_%d_%d%s", l[i].bk_name, l[i].author, l[i].price, l[i].pages, "\n");

    } else if(usernumber == 2){
        printf("Your Book Information Is As Follows =>");
        fgets(line, sizeof(line), file);
        strcpy(lastbook, line);
        printf("%s\n", lastbook);
        // while (fgets(line, sizeof(line), file)) {
        //     lastbook = line;
        // }
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
                printf("No. Of Pages :- %s\n", ptr);
            }
            ptr = strtok(NULL, "_");
            counterdd++;
	    }
    } else if(usernumber==3){
        fclose(fptr);
        exit(0);
    }
    return 0;
}