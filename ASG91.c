/*WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING 
POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER. */

#include<stdio.h>
#include<math.h>

int main(){
    float n;
    printf("Enter a number : ");
    scanf("%f",&n);
    float *ptr = &n;
    printf("The square of the number is : %.0f\n",pow(*ptr,2.0));
    printf("The cube of the number is : %.0f",pow(*ptr,3.0));
}