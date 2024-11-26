//  PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE 
// ARRAYS INTO THIRD.
#include<stdio.h>
int main(){
    int arr1[10],arr2[10],sum[10];
    for(int i=0 ; i<10 ; i++){
        printf("Enter number %d of 1st array : ",i+1);
        scanf("%d",&arr1[i]);
    }
    for(int j=0 ; j<10 ; j++){
        printf("Enter number %d of 2nd array : ",j+1);
        scanf("%d",&arr2[j]);
    }
    for(int k=0 ; k<10 ; k++){
        sum[k] = arr1[k]+arr2[k];
    }
    printf("The array of the sum of array 1 and array 2 is :\n");
    for(int l=0 ; l<10 ; l++){
        printf("%d\t",sum[l]);
    }

    return 0;
}    
