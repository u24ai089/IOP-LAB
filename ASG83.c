//WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM

#include<stdio.h>

void print_max(){
    int n,max = -9999;
    printf("Enter the number of numbers you want to enter : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        printf("Enter number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0 ; i<n ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("The max number in the array is %d",max);
}

int main(){
    print_max();

    return 0;
}