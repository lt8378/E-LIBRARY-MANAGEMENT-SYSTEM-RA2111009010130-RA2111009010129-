/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//c program for the E-library management system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// create structure of library
struct library{
    char book_name[20];
    char author[20];
    int pages;
    float price;

};
//driver code
int main()
{
// create a instance 
    struct library lib[100];
    char ar_nm[30],bk_nm[30];
// keep the track of the number of books available in the //library
    int i,input,count;
    i=input=count=0;
//Iterate the loop
    while (input!=5){
        printf("\n\n********######"
        "WELCOME TO E-LIBRARY"
        "######********\n");
        printf("\n\n1. Add book infor"
        "mation\n2. display"
        "book information\n");
        printf("3.List all books of"
        "given author\n");
        printf("4.List the count of book "
        "s in the library\n");
        printf("5.Exit");

// Enter the book details
        printf("\n\nEnter one of"
        "the above:");
        scanf("%d",&input);
    } 

// take the author name as input

    printf("Enter author name :");
    scanf("%s",ar_nm);
    for(i=0;i<count;i++){
        if(strcmp(ar_nm,
        lib[i].author)
        ==0)
        printf("%s%s%d%f",
        lib[i].book_name,
        lib[i].author,
        lib[i].pages,
        lib[i].price);
    }
// Print total count
    {printf("\n No of books in "
    "brary : %d",
    count);
    exit(0);}
    return 0;
    }
        
       In this program we have created an E-library Management system where the user has the following options :
*add book information
*display book information 
*to list all books of a given author
*to list the count of books in the library.

    FUNCTIONALITIES REQUIRED:
*IF THE USER TRIES TO ADD A BOOK THEN THE USER MUST HAVE TO PROVIDE THE BELOW SPECIFIC INFORMATION ABOUT THE BOOK AS:
1.ENTER BOOK NAME
2.ENTER AUTHOR NAME
3.ENTER PAGES
4.ENTER PRICE

*WHEN THE USER TRIES TO DISPLAY ALL BOOKS OF A PARTICULAR AUTHOR THEN THE USER MUST HAVE TO ENTER THE NAME OF THE AUTHOR :
1.ENTER THE AUTHOR NAME


*THE E -LIBRARY MANAGEMENT SYSTEM MUST BE ALSO CAPABLE OF COUNTING ALL ?HE BOOKS AVAILABLE IN THE LIBRARY. 





    