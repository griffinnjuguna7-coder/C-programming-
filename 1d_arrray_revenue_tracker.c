/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description:1D Array- Weekly Revenue Tracker 
*/
#include <stdio.h>

int main()
{
    float revenue[7];
    float total = 0, average;
    int i;

    printf("Enter the revenue for 7 days:\n");
    for(i=0; i<7; i++)
    {
        printf("Day %d: ", i+1);
        scanf("%f", &revenue[i]);
        total = total + revenue[i];
    }

    average = total / 7;

    printf("\nTotal weekly revenue = %.2f\n", total);
    printf("Average daily revenue = %.2f\n", average);

    return 0;
}