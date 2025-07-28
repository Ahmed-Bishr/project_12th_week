#include <stdio.h>
#include "ui.h"
#include "sales.h"

void main_UI() {
    int choice;
    char resume;

    do {
        printf("\n--- Retail Sales Analysis ---\n");
        printf("1. Enter Sales Data\n");
        printf("2. Calculate Total Sales\n");
        printf("3. Branch Percentage Share\n");
        printf("4. Find Peak Sales Month\n");
        printf("5. Sort Branches by a Month\n");
        printf("6. Sort Months by a Branch\n");
        printf("7. Exit\n");

        printf("\nChoose from the menu: ");
        scanf("%d", &choice);

        switch_choice(choice);

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &resume); 
    } while (resume == 'y' || resume == 'Y');
}

void switch_choice(int choice) {
    switch (choice) {
    case 1:
        enter_sales_data();
        break;
    case 2:
        printf("2. Calculate Total Sales\n");
        break;
    case 3:
        printf("3. Branch Percentage Share\n");
        break;
    case 4:
        printf("4. Find Peak Sales Month\n");
        break;
    case 5:
        printf("5. Sort Branches by a Month\n");
        break;
    case 6:
        printf("6. Sort Months by a Branch\n");
        break;
    case 7:
        printf("Goodbye!\n");
        return;
    default:
        printf("Invalid choice.\n");
    }
}