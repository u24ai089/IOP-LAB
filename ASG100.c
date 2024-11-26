/*A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL 
NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N 
STUDENTS*/

#include<stdio.h>
int main(){
    FILE *ptr = fopen("lnmiitstudent.java","r");
    FILE *ptr1 = fopen("Student.txt","a");
    char ch;
    char name[25];
    char roll_no[10];
    int total_marks;

    for(int i=0 ; i<3 ; i++){
        fputs("Roll no : ",ptr1);
        while((ch = fgetc(ptr)) != ','){
        fputc(ch,ptr1);
        }
        fputs("\nName : ",ptr1);
        while((ch = fgetc(ptr)) != ','){
            fputc(ch,ptr1);
        }
        fputs("\nTotal marks : ",ptr1);
        while((ch = fgetc(ptr)) != '\n'){
            fputc(ch,ptr1);
        }
    }
}