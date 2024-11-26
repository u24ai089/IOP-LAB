#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines upto which you want to print the pattern : ");
    scanf("%d" ,&n);
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            printf("%c" ,'A'+j-1);
        }
        printf("\n");
    }


    return 0;
}