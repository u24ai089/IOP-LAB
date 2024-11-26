/* WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION 
USING POINTER TO STRUCTURE*/

#include<stdio.h>

struct info_book{
        char title_book[50];
        char author[30];
        char publisher[30];
        int year_of_publish;
    };

void print_info_of_book(struct info_book b1){
    printf("The title of the book is : %s",b1.title_book);
    printf("The name of the author is : %s",b1.author);
    printf("The name of the publisher is : %s",b1.publisher);
    printf("The year of publication is : %d",b1.year_of_publish);
}
int main(){
    struct info_book b1;

    printf("Enter the title of the book\n");
    fgets(b1.title_book,50,stdin);
    printf("Enter the name of the author of the book\n");
    fgets(b1.author,50,stdin);
    printf("Enter the name of the publisher\n");
    fgets(b1.publisher,50,stdin);
    printf("Enter the year of publication of the book\n");
    scanf("%d",&b1.year_of_publish);

    print_info_of_book(b1);
}