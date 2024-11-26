//PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT
#include<stdio.h>
int main(){
    int arr[3][3],max=0,min=9999;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            printf("Row %d ,Column %d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    printf("MAX : %d\n",max);
    printf("MIN : %d",min);

    return 0;
}