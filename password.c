/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description:pass
*/
#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);
    } while (password != 1234);

    printf("Access Granted\n");
    return 0;
}