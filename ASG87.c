// WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT  LENGTH OF STRING. 

#include<stdio.h>

void length_of_string(char arr[]){
    int count = 0;
    for(int i=0 ; arr[i] != '\0' ; i++){
        count++;
    }
    printf("Length of the string is : %d",count-1);
}
int main(){
    char line_of_text[100];
    printf("Enter the line of text\n");
    fgets(line_of_text,100,stdin);
    length_of_string(line_of_text);
}