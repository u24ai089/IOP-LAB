//WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER

#include<stdio.h>
#include<string.h>

int main(){
    char string[50];
    int count = 0;
    printf("Enter a string : ");
    fgets(string,50,stdin);
    char *ptr = string;
    for(int i=0 ; string[i] != '\0' ; i++){
        if(*(ptr+i) == 'a'||*(ptr+i) == 'e'||*(ptr+i) == 'i'||*(ptr+i) == 'o'||*(ptr+i) == 'u'||*(ptr+i) == 'A'||*(ptr+i) == 'E'||*(ptr+i) == 'I'||*(ptr+i) == 'O'||*(ptr+i) == 'U'){
            count++;
        }
    }
    printf("The number of vowels is %d",count);
}