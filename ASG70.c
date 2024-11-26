/* PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR 
ELEMENT IN THE ARRAY.*/


#include<stdio.h>
int main(){
    int n,num,count=0;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        printf("Enter element %d of the array : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to check in the array : ");
    scanf("%d",&num);

    for(int j=0 ; j<n ; j++){
        if(arr[j]==num){
            count++;
        }
    }

    printf("%d occured in the array %d times",num,count);    
}