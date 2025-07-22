#include <stdio.h>

int main() {
    int choice;
    float totalBill = 0;

    char name[50];
    long long contact;
    char location[30];

    printf("\n******** Welcome to Cable Billing System ********\n");

    // Get customer details
    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your contact number: ");
    scanf("%lld", &contact);

    printf("Enter your location: ");
    scanf("%s", location);

    // Display available packs
    printf("\nAvailable Channel Packs:\n");
    printf("1. Zee Pack        - Rs.50\n");
    printf("2. Star Maa Pack   - Rs.42\n");
    printf("3. Gemini Pack     - Rs.55\n");
    printf("4. ETV Pack        - Rs.40\n");
    printf("5. News Pack       - Rs.39\n");
    printf("6. Cartoon Pack    - Rs.33\n");
    printf("7. Sports Pack     - Rs.60\n");
    printf("8. Movie Pack      - Rs.70\n");
    printf("9. Music Pack      - Rs.25\n");
    printf("10. Kids Pack      - Rs.30\n");

    printf("\nSelect the channel packs you want (enter 0 to finish):\n");

    // Channel selection loop
    while (1) {
        printf("Enter your choice (1–10): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break; // Exit loop
        }

        switch (choice) {
            case 1:
                printf("Zee Pack added (Rs.50)\n");
                totalBill += 50;
                break;
            case 2:
                printf("Star Maa Pack added (Rs.42)\n");
                totalBill += 42;
                break;
            case 3:
                printf("Gemini Pack added (Rs.55)\n");
                totalBill += 55;
                break;
            case 4:
                printf("ETV Pack added (Rs.40)\n");
                totalBill += 40;
                break;
            case 5:
                printf("News Pack added (Rs.39)\n");
                totalBill += 39;
                break;
            case 6:
                printf("Cartoon Pack added (Rs.33)\n");
                totalBill += 33;
                break;
            case 7:
                printf("Sports Pack added (Rs.60)\n");
                totalBill += 60;
                break;
            case 8:
                printf("Movie Pack added (Rs.70)\n");
                totalBill += 70;
                break;
            case 9:
                printf("Music Pack added (Rs.25)\n");
                totalBill += 25;
                break;
            case 10:
                printf("Kids Pack added (Rs.30)\n");
                totalBill += 30;
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    // Final bill
    printf("\n******** BILL SUMMARY ********\n");
    printf("Customer Name     : %s\n", name);
    printf("Contact Number    : %lld\n", contact);
    printf("Location          : %s\n", location);
    printf("Total Bill Amount : Rs.%.2f\n", totalBill);
    printf("\n");

    return 0;
}
