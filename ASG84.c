//WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION

#include<stdio.h>

void print_info_of_book(char arr1[],char arr2[],char arr3[],int n){
    printf("The title of the book is : %s",arr1);
    printf("The name of the author : %s",arr2);
    printf("The name of the publisher is : %s",arr3);
    printf("The year of publication is : %d",n);
}


int main(){
    char title[50];
    printf("Enter the title of the book\n");
    fgets(title,50,stdin);
    char author[50];
    printf("Enter the name of the author of the book\n");
    fgets(author,50,stdin);
    char publisher[50];
    printf("Enter the name of the publisher\n");
    fgets(publisher,50,stdin);
    int year_of_pbl;
    printf("Enter the year of publication of the book\n");
    scanf("%d",&year_of_pbl);

    print_info_of_book(title,author,publisher,year_of_pbl);
}