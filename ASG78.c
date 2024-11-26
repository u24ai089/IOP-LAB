//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.
#include<stdio.h>

void armstrong(int n){
    int num1 = n;
    int sum=0;
    while(n>0){
        int a=n%10;
        sum = sum + (a*a*a);
        n/=10;
    }
    if(sum==num1){
        printf("The number you have entered is an armstrong");
    }
    else{
        printf("The number you have entered is not an armstrong");
    }
}

int main(){
    int num;
    printf("Enter a number to check wheather it is armstrong or not : ");
    scanf("%d",&num);
    armstrong(num);
}
