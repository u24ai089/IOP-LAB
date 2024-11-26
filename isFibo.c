#include<stdio.h>

int isFibo(int x,int arr[30]){
    for(int i=0 ; i<30 ; i++){
        if(arr[i] == x){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n,arr[30];
    printf("Enter the number of inputs : ");
    scanf("%d\n",&n);
    int num[n];
    // printf("Enter the numbers\n");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&num[i]);
    }
    int fibo0 =0 ,fibo1 =1,a;
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2 ; i<30 ; i++){
        int curr = fibo0 + fibo1;
        arr[i] = curr;
        fibo0 = fibo1;
        fibo1 = curr;
    }
    for(int i=0 ; i<n ; i++){
        a = num[i];
        if(isFibo(a,arr) == 1){
            printf("IsFibo\n");
        }
        else if(isFibo(a,arr) == 0){
            printf("IsNotFibo\n");
        }

    } 
}