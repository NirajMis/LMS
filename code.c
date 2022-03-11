/*
███╗░░██╗███████╗███████╗██████╗░░█████╗░░░░░░██╗  ███╗░░░███╗██╗░██████╗██╗░░██╗██████╗░░█████╗░
████╗░██║██╔════╝██╔════╝██╔══██╗██╔══██╗░░░░░██║  ████╗░████║██║██╔════╝██║░░██║██╔══██╗██╔══██╗
██╔██╗██║█████╗░░█████╗░░██████╔╝███████║░░░░░██║  ██╔████╔██║██║╚█████╗░███████║██████╔╝███████║
██║╚████║██╔══╝░░██╔══╝░░██╔══██╗██╔══██║██╗░░██║  ██║╚██╔╝██║██║░╚═══██╗██╔══██║██╔══██╗██╔══██║
██║░╚███║███████╗███████╗██║░░██║██║░░██║╚█████╔╝  ██║░╚═╝░██║██║██████╔╝██║░░██║██║░░██║██║░░██║
╚═╝░░╚══╝╚══════╝╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝░╚════╝░  ╚═╝░░░░░╚═╝╚═╝╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝
*/

#include<stdio.h>
// #include<conio.h>
// #include<stalib.h>
// #include<string.h>

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

    printf("1) Add Book Information\n");
    printf("2) Display Book Information\n");
    printf("3) List All Books Of Given Author\n");
    printf("4) List The Count Of Books In The Library\n");
    printf("5) Exit LMS\n");

    printf("Enter A Number From Above For Doing That Operation!!.");
    scanf("%d", %usernumber);

    if(usernumber == 1){
        printf("Enter The Book Name: \n");
        scanf("%s",&l[i].bk_name);

        printf("Enter The Book Author: \n");
        scanf("%s",&l[i].author);

        printf("Enter The Book Price : \n");
        scanf("%f",&l[i].price);

        printf("Enter Number Of Pages: \n");
        scanf("%d",&l[i].pages);
    } else if(usernumber == 2){
                        printf("Your Book Information Is As Follows =>");
                for(i=0; i<keepcount; i++){
                    printf("\nBook Name :- %s", l[i].bk_name);
                    printf("\nBook Author :- %s", l[i].author);
                    printf("\nPrice :- %f", l[i].price);
                    printf("\nNo. Of Pages :- %d", l[i].pages);
                }
        
    } else if(usernumber==3){
        exit(0);
    }
    return 0;
}
    
/*
    while (j!=6) {
    switch(j){
        case 1:


                keepcount++;
                j=2;                
                // break;
        case 2:

                j++
                // break;

        case 3:
                printf("Enter The author Name:\n")
                scanf("%s",&ar_nm);
                for(i=0;i<keepcount; i++){
                    if(!strcmp(ar_nm,l[i].author)){
                        printf("%s %s %f %d\n", l[i].bk_name, l[i].author,l[i].price,l[i].pages);
                    }
                }
                j++
                // break;
        case 4:
                printf("Number Of Books Are :- %d Books\n", keepcount + 1);
                break;
        case 5:
                exit(0);
    }
    }
    return 0;
}
*/