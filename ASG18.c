//PROGRAM TO READ THREE NOS AND PRINT MAX USING CONDITIONAL OPERATOR
#include<stdio.h>

int main(){
    int a,b,c,max;
    printf("Enter the three nos\n");
    scanf("%d%d%d" ,&a ,&b ,&c);
    max = a>b ? (a>c ? a : c) : (b>c ? b : c);
    printf("Max number is : %d" ,max);

    return 0;



}