/*
███╗░░██╗███████╗███████╗██████╗░░█████╗░░░░░░██╗  ███╗░░░███╗██╗░██████╗██╗░░██╗██████╗░░█████╗░
████╗░██║██╔════╝██╔════╝██╔══██╗██╔══██╗░░░░░██║  ████╗░████║██║██╔════╝██║░░██║██╔══██╗██╔══██╗
██╔██╗██║█████╗░░█████╗░░██████╔╝███████║░░░░░██║  ██╔████╔██║██║╚█████╗░███████║██████╔╝███████║
██║╚████║██╔══╝░░██╔══╝░░██╔══██╗██╔══██║██╗░░██║  ██║╚██╔╝██║██║░╚═══██╗██╔══██║██╔══██╗██╔══██║
██║░╚███║███████╗███████╗██║░░██║██║░░██║╚█████╔╝  ██║░╚═╝░██║██║██████╔╝██║░░██║██║░░██║██║░░██║
╚═╝░░╚══╝╚══════╝╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝░╚════╝░  ╚═╝░░░░░╚═╝╚═╝╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝
*/

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

struct library {
    char bk_name[30];
    char author[20];
    float price;
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

    char *lastbook;

    printf("1) Add Book Information\n");
    printf("2) Display Book Information\n");
    printf("3) Exit LMS\n");

    printf("Enter A Number From Above For Doing That Operation!!.");
    scanf("%d", &usernumber);

    if(usernumber == 1){
        printf("Enter The Book Name: \n");
        scanf("%s",&l[i].bk_name);

        printf("Enter The Book Author: \n");
        scanf("%s",&l[i].author);

        printf("Enter The Book Price : \n");
        scanf("%f",&l[i].price);

        printf("Enter Number Of Pages: \n");
        scanf("%d",&l[i].pages);

        fprintf(fptr, "%s %s %f %d %s", l[i].bk_name, l[i].author, l[i].price, l[i].pages, "\n");

    } else if(usernumber == 2){
        printf("Your Book Information Is As Follows =>");
        // while (fgets(line, sizeof(line), file)) {
        //     lastbook = line;
        // }
        // char *ptr = strtok(lastbook, " ");
        // while(ptr != NULL){
        //     printf("%s\n", ptr);
        //     ptr = strtok(NULL, " ");
	    // }
        printf("\nBook Name :- %s", l[i].bk_name);
        printf("\nBook Author :- %s", l[i].author);
        printf("\nPrice :- %f", l[i].price);
        printf("\nNo. Of Pages :- %d\n", l[i].pages);
    } else if(usernumber==3){
        fclose(fptr);
        exit(0);
    }
    return 0;
}