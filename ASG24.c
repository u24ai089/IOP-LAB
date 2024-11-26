//WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    printf("Enter a number : ");
    scanf("%d" ,&n);
    printf("Enter the value of x : ");
    scanf("%d" ,&x);

    switch(n){

        case 1:
        printf("The value of Y is %d",1+x);
        break;
        case 2:
        printf("The value of Y is %.1f",1+(x/2.0));
        break;
        case 3:
        printf("The value of Y is %.2f",1+pow(x,3));

        break;
        case 4:
        printf("The value of Y is %d",1+(4*x));
        break;
        default:
        printf("Wrong operation");
        break;


    }
    return 0;

}