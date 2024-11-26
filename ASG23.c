/*PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER 
FILE(<MATH.H>)*/
#include<stdio.h>
int main(){
    int a,b,pow=1;
    printf("Enter the base\n");
    scanf("%d" ,&a);
    printf("Enter the exponent\n");
    scanf("%d" ,&b);
    for(int i=1 ;i<=b ;i++){
        pow=pow*a;
    }
    printf("The value of %d^%d is %d" ,a,b,pow);


    return 0;
}