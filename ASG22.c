//PROGRAM TO CALCULATE FACTORIAL OF A NO.
#include<stdio.h>

int FacNum(int n);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d" ,&num);
    printf("The factorial is %d" ,FacNum(num));

    return 0;
}

int FacNum(int n){
    if(n==0){
        return 1;
    }
    int FacNm1 = FacNum(n-1);
    int FacN = FacNm1 * n;
    return FacN;
}