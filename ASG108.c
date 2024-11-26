// WITHOUT USING INBUILT STRING FUNCTIONS, PERFORM THE FOLLOWING IN C LANGUAGE

#include<stdio.h>

void cmp_string(char *ptr1,char *ptr2){
    int i,j;
    for(i=0,j=0 ; *(ptr1 + i) != '\0' && *(ptr2 + j) != '\0' ; i++,j++){
        if(*(ptr1 + i) > *(ptr2 + j)){
            printf("String 1 is greater than string 2");
            return;
        }
        if(*(ptr1 + i) < *(ptr2 + j)){
            printf("String 2 is greater than string 1");
            return;
        }
    }
    if(*(ptr1+i) == '\0' && *(ptr2+j) != '\0'){
        printf("String 2 is greater than string 1");
        return;  
    }
    else if(*(ptr2+j) == '\0' && *(ptr1+i) != '\0'){
        printf("String 1 is greater than string 2");
        return;
    }
    else if(*(ptr1+i) == '\0' && *(ptr2+j) == '\0'){
        printf("Both the strings are equal");
        return;
    }
}

void cat_string(char *ptr1,char *ptr2){
    int i,j;
    char arr[100];
    for(i=0 ; *(ptr1 + i) != '\0' ; i++){
        arr[i] = *(ptr1 + i);
    }
    for(j=0 ; *(ptr2+j) != '\0' ; j++){
        arr[j+i] = *(ptr2 + j);
    }
    arr[i+j] = '\0';
    printf("Concatinated string is : %s",arr); 
}
int main(){
    char string1[25] = "happy holi";
    char string2[25] = "hexadecimal number";
    char string3[25];
    char *ptr1 = string1;
    char *ptr2 = string2;
    char *ptr3 = string3;

    //A. COPY ONE STRING INTO ANOTHER 
    int i;
    for(i=0; string1[i] != '\0' ; i++){
        *(ptr3 + i) = *(ptr1 + i);
    }
    *(ptr3 + i) = '\0';
    printf("Copied string 3 is : %s",string3);

    printf("\n");
    
    //B. COMPARE TWO STRINGS
    cmp_string(string1,string2);
    printf("\n");

    //C. CONCAT TWO STRINGS 
    cat_string(string1,string2);
    printf("\n");

    //D. REVERSE A GIVEN STRING
    int str_len;
    for(int i=0 ; ;i++){
        if(string1[i] == '\0'){
            str_len = i;
            break;;
        }
    }
    printf("Reversed string1 is : ");
    for(int j=str_len-1 ; j>=0 ; j--){
        printf("%c",string1[j]);
    }
}