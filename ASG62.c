// PROGRAM TO REVERSE AN ARRAY.
#include<stdio.h>
int main(){
    int n,arr[50],reverse[50];
    printf("Enter the number of elements you want to enter in the array : ");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        printf("Enter number %d of the array : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=(n-1),k=0 ; j>=0,k<n ; j--,k++){
        reverse[k] = arr[j];
    }
    printf("The reversed array is :\n");
    for(int l=0 ; l<n ; l++){
        printf("%d\t",reverse[l]);
    }


    return 0;
}