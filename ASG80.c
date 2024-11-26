/*WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI 
NUBERS.*/

#include<stdio.h>

void fib(int n){
    int fibo0 = 0;
    int fibo1 = 1;
    if(n<=0){
        printf("Invalid number");
    }
    if(n == 1){
        printf("%d",fibo0);
    }
    else if(n == 2){
        printf("%d\t",fibo0);
        printf("%d",fibo1);
    }
    else{
        printf("%d\t",fibo0);
        printf("%d\t",fibo1);
        for(int i=2 ; i<n ; i++){
        int curr = fibo0 + fibo1;
        printf("%d\t",curr);
        fibo0 = fibo1;
        fibo1 = curr; 
        }
    }
}
int main(){
    int n;
    printf("Enter the number of terms you want to print in the fibonacci series : ");
    scanf("%d",&n);
    fib(n);
}