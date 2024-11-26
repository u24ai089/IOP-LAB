// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, 
// NEGATIVE, AND ZERO ELEMENTS.
#include<stdio.h>
int main(){
    int positive=0,negative=0,zero=0,arr[10];
    for(int i=0 ; i<10 ; i++){
        printf("Enter number %d : ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            positive+=1;
        }
        else if(arr[i]==0){
            zero+=1;
        }
        else if(arr[i]<0){
            negative+=1;
        }
    }

    printf("Positive elements : %d\n",positive);
    printf("Zero elements : %d\n",zero);
    printf("Negative elements : %d",negative);


    return 0;

}