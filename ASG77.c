// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT

#include<stdio.h>

void palindrome(int n){
    int num = n;
    int new=0,remainder;
    while(n>0){
        remainder = n%10;
        new = new*10 + remainder;
        n/=10;
    }

    if(new == num){
        printf("The number you have entered is a palindrome");
    }
    else{
        printf("The number you have entered is not a palindrome");
    }
}

int main(){
    int n;
    printf("Enter the number you want to check : ");
    scanf("%d",&n);
    palindrome(n);
}