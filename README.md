# E-LIBRARY-MANAGEMENT-SYSTEM-RA2111009010130-RA2111009010129-
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
        
