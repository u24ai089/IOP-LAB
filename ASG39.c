//PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.
#include<stdio.h>
int main(){
    int N;
    printf("Enter the number upto which you want to print the series : ");
    scanf("%d" ,&N);
    for(int i=1 ; i<=N ; i++){
        printf("%d/%d!" ,i ,i);
        printf("+");
    }

    return 0;
}