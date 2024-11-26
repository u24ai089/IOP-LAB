//TO CALCULATE CUT OFF MARK OF A STUDENT
#include<stdio.h>


int main()
{
    int M , P , C , E;
    float CM;
    printf("Enter the marks in math,physics,chemistrty and entrance examination out of 200\n");
    scanf("%d%d%d%d" ,&M ,&P ,&C ,&E);
    CM = M/2.0 + P/2.0 + C/2.0 + E;
    printf("The cut off mark is : %.2f" ,CM);
    return 0;


    
}


