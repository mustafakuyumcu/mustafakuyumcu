//Mustafa Kuyumcu
//2000002006
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int choice, quantity;
    double pen_price = 10.00, pencil_price = 6.15, notebook_price = 14.00, rubber_price = 3.50, pencilcase_price = 20.05, thetotal;
    printf("Enter the product number (1 for pen, 2 for pencil, 3 for notebook, 4 for rubber, 5 for pencil case): ");
    scanf("%d", &choice);
    printf("Enter the quantity: ");
    scanf("%d", &quantity);
    if (choice == 1) {
        thetotal = pen_price * quantity;
    }
    else if (choice >= 2 && choice<=4) {
        thetotal = pencil_price * quantity;
    }
    else if (choice == 3) {
        thetotal = notebook_price * quantity;
    }
    else if (choice == 4) {
        thetotal = rubber_price * quantity;
    }
    else if (choice == 5) {
        thetotal = pencilcase_price * quantity;
    }
    if (quantity >= 2 && quantity <= 4) {
        thetotal = thetotal * 95;
        thetotal = thetotal / 100;
    }
    else if (quantity >=5 && quantity <= 9) {
        thetotal = thetotal * 90;
        thetotal = thetotal /100;
    }
    else if (10 <= quantity) {
        thetotal = thetotal * 85;
        thetotal = thetotal / 100;
    }
    else if (quantity == 1)
    {
        thetotal = thetotal * 1;
    }
    printf("The total is $%.2f", thetotal);
    return 0;
}