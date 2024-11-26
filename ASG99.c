/*WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS 
PRESENT IN THE FILE*/

#include<stdio.h>
int main(){
    FILE *f_ptr = fopen("file99.txt","r");
    char ch;
    int vowel_count = 0;
    while((ch = fgetc(f_ptr)) != EOF){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            vowel_count ++;
        }
    }
    fclose(f_ptr);

    printf("The number of vowels in the file is %d",vowel_count);
}