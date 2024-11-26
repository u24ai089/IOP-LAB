/* IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS 
LAST N DIGITS 
FOR EXAMPLE FLIP(123, 2)= 132 ; (HERE N=2) FLIP(12345,3)= 12543 (HERE N=3)*/

#include<stdio.h>
#include<math.h>

void flip(int N,int n){
    int divisor = pow(10,n);
    int first_digits = N / divisor;
    int remainder;
    printf("%d",first_digits);
    for(int i=0 ; i<n ; i++){
        remainder = N % 10;
        printf("%d",remainder);
        N /= 10;
    }
    return;
}
int main(){
    flip(123,2);
}