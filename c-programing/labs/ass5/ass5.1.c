#include <stdio.h>

int main()
{
    float basic,da=50,hr=20,gross;

    printf("Enter Aman's basic salary - ");
    scanf("%0.2f",&basic);
    printf("\n\n");
    
    gross = ((da/100)*basic) + ((hr/100)*basic) + basic;

    printf("The Gross Salary of Aman is - %0.2f\n\n", gross);
    
    return 0;
}