//PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.
#include<stdio.h>
int main(){
    int n,sum=0,remainder;
    printf("Enter a number : ");
    scanf("%d" ,&n);
    while(n!=0){
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    printf("The sum of the digits of the number is %d" ,sum);


    return 0;
}