//READ A NUMBER N AND PRINT FACTOR OF N
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d" ,&n);
    printf("The factors of %d are : ",n);
    for(int i=1 ; i<=n ; i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
}