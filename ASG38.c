//PROGRAM TO PRINT 1,4,9,16,25,………N.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the term upto which the series will continue : ");
    scanf("%d" ,&n);
    for(int i=1; i<=n ;i=i+1){
        printf("%d\n" ,i*i);
    }


    return 0;
}


