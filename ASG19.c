/*PROGRAM to READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR 
NOT USING CONDATIONAL OPERATOR*/
#include<stdio.h>

int main()
{
    char ch;
    char A,Z,a,z;
    printf("Enter any character from a to z : ");
    scanf("%c" ,&ch);
    if(ch>=65 && ch<=90){
        printf("The character is not a small case");
    }

    else if(ch>=97 && ch<=122){
        printf("The character is small case");
    }

    return 0;


}