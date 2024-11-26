/*WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING 
POINTERS*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap_str(char *arr[],int n){
    char *temp;
    temp = arr[n];
    arr[n] = arr[n+1];
    arr[n+1] = temp;
    return;
}
int main(){
    char **string = malloc(5 * sizeof(char *));
    for(int i=0 ; i<5 ; i++){
    string[i] = malloc(15 * sizeof(char));
    }

    for(int i=0 ; i<5 ; i++){
        printf("String %d : ",i+1);
        scanf("%s",string[i]);
    }

    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<4 ; j++){
            if(strcmp(string[j],string[j+1]) >0){
                swap_str(string,j);
            }
        }
    }
    for(int i=0 ; i<5 ; i++){
        printf("%s\n",string[i]);
    }
}