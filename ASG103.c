//WRITE A  C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS

#include<stdio.h>

# define MAX(a,b) (a>b ? a : b)
int main(){
    int num1 = 34;
    int num2 = 59;
    int largest = MAX(num1,num2);
    printf("Largest number is %d",largest);
}