#include<stdio.h>

int main(){
    int n,count,remainder,num;
    printf("Enter the number of inputs : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<n ; i++){
        count = 0;
        num=arr[i];
        while(arr[i] != 0){
            remainder = arr[i]%10;
            if(num%remainder == 0){
                count++;
            }
            arr[i] /= 10;
        }
        printf("%d\n",count);
    }   
}