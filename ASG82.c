/*82) WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS. 
NCR = (!N/(!R*!(N-R)));*/

#include<stdio.h>

int calc_nCr(int n,int r){
    int a = 1,b=1,c=1;
    for(int i=2 ; i<=n ; i++){
        a *= i;
    }
    for(int i=2 ; i<=r ; i++){
        b *= i;
    }
    for(int i=2 ; i<=(n-r) ; i++){
        c *= i;
    }
    int nCr = a/(b*c);
    return nCr;
}

int main(){
    int N,R;
    printf("Enter the value of N : ");
    scanf("%d",&N);
    printf("Enter the value of R : ");
    scanf("%d",&R);
    printf("nCr = %d",calc_nCr(N,R));
}