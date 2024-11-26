//PROGRAM TO PRINT 2,4,6,8,10,12………N.
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d" ,&n);

    for(int i=2 ; i<=n ; i+=2){
        printf("%d\n" ,i);
    }
    return 0;
}