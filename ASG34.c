//PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)
#include<stdio.h>

int Fibo(int n);

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d" ,&a);
    
    printf("The Fibonacci value of %d is %d" ,a ,Fibo(a));


    return 0;




}

int Fibo(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int FiboNm1=Fibo(n-1);
    int FiboNm2=Fibo(n-2);
    int FiboN=FiboNm1 + FiboNm2;
    return FiboN;
}