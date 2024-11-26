// PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY
#include<stdio.h>
int main(){
    int arr[10] ={34,76,133,464,99,3,46,13,288,373};
    int key,found=0;
    printf("Enter the key you want to search : ");
    scanf("%d",&key);
    for(int i=0 ; i<10 ; i++){
        if(arr[i] == key){
            printf("key found at index %d",i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Key not found");
    }

    return 0;
}