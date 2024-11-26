// MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C

#include<stdio.h>
int main(){
    int a=10;
    int *ptr = &a;
    *ptr = 12;
    printf("New value of a is %d",a);    
}