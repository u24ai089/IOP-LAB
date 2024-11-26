/*PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL 
CASE LETTER, A DIGIT OR A SPECIAL SYMBOL*/
#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c" ,&ch);
    if(ch>=97&&ch<=122){
        printf("The entered character is a small case letter");
    }
    else if(ch>=65&&ch<=90){
        printf("The entered character is a capital letter");
    }
    else if(ch>=48&&ch<=57){
        printf("The entered character is a digit");
    }
    else{
        printf("The entered character is a special symbol");
    }


    return 0;
}