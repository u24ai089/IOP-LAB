//PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX
#include<stdio.h>
int main(){
    int arr[30],N,max1=0,max2=0;
    printf("Enter the number of numbers you want to enter : ");
    scanf("%d",&N);

    for(int i=0 ; i<N ; i++){
        printf("Enter number %d\n" ,i+1);
        scanf("%d" ,&arr[i]);
    }

    for(int j=0 ; j<N ; j++){
        if(arr[j] >max1){
            max1 =arr[j];
        }
    }
    for(int k=0 ; k<N ; k++){
        if(arr[k]>max2 && arr[k]<max1){
            max2 =arr[k];
        }
    }

    printf("The maximum number among the %d numbers is %d\n" ,N ,max1);
    printf("The second maximum number among the %d numbers is %d" ,N ,max2);


    return 0;
}