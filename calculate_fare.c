/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description:calculation of fare 
*/
#include <stdio.h>
//Fuction calculatorFare()//
float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance;
    printf("Enter distance traveled (in kilometers): ");
    scanf("%f", &distance);

    float totalFare = calculateFare(distance);
    printf("Total Fare = KSh. %.2f\n", totalFare);

    return 0;
}