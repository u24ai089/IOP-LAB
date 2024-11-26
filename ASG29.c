//. PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT
#include<stdio.h>
int main(){
    int new=0,remainder,original,n;
    printf("Enter the number you want to check : ");
    scanf("%d",&n);
    original = n;

    while(n!=0){
        remainder = n%10;
        new = new*10 + remainder;
        n/=10;
    }

    if(new == original){
        printf("%d is a palindrome",original);
    }
    else{
        printf("%d is not a palindrome",original);
    }

    return 0;
    
}