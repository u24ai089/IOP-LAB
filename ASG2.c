//PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE

#include <stdio.h>

int main()
{
    float eng, phy, chem, math, hin; 
    float total, percentage;
    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &hin);
    total = eng + phy + chem + math + hin;
    percentage = (total / 500.0) * 100;
    printf("Total marks = %.2f\n", total);
    printf("Percentage = %.2f", percentage);

    return 0;
}
