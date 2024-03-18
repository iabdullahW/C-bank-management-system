#include <stdio.h>

int main() {
    float balance = 0;
    int choice;
    float amount;

    printf("Welcome to Simple Bank\n");

    while (1) {
        printf("\nEnter 1 to deposit, 2 to withdraw, or 3 to view balance, 4 to exit: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit successful\n");
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient funds\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful\n");
                }
                break;
            case 3:
                printf("Current balance: %.2f\n", balance);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
