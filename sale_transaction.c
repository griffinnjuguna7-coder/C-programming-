/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description:daily sale transaction 
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    float amount, total = 0.0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error opening sales.txt!\n");
        return 1;
    }

    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(fp);
    printf("Total sales for the day: $%.2f\n", total);
    return 0;
}