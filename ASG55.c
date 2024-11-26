// PROGRAM to READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND 
// TOTAL NO. OF EVERY ELEMENT
#include<stdio.h>
int main(){
    int even=0,odd=0,arr[10];
    for(int i=0 ; i<10 ; i++){
        printf("Enter number %d : ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even=even+1;
        }
        else if(arr[i]%2 !=0){
            odd=odd+1;
        }
    }



    printf("The total number of odd numbers are %d\n",odd);
    printf("And the total number of even numbers are %d",even);


    return 0;
}