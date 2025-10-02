/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description:eliguilty to undertake exam 
             through class attendance 
*/
#include <stdio.h>

int main() {
    float attendance, average;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &average);

    if (attendance >= 75 && average >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}