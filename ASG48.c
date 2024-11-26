#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines upto which you want to print the pattern : ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=(n-i) ; j++){
            printf("%c",' ');
        }
        for(int k=1 ; k<=i ; k++){
            printf("%d",k);
        }
        printf("\n");
    }
}