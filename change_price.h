#include"header.h"
int changePrice(int price) {
    char pass[10], pak[10] = "pass";
    printf("\nEnter the password to change the price of the ticket: ");
    scanf("%s", pass);
    if (strcmp(pass, pak) == 0) {
        printf("Please enter the new price: ");
        scanf("%d", &price);
        printf("Price updated successfully.\n");
    } else {
        printf("The entered password is wrong! Access denied.\n");
    }
    return price;
}