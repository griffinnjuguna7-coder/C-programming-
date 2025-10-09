/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description: Bank balance
*/
#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter your account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;
        printf("Current balance: %.2f\n", balance);
    }

    printf("Insufficient balance.\n");
    return 0;
}