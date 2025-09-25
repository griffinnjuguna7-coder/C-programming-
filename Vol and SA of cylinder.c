/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description:Volume and Surface area 
*/
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height, volume, surfaceArea;

    
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface Area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}