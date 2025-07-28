#include <stdio.h>
#define MONTHS 12 // months from 1 -> 12

// Function declarations
void main_UI(); // Displays the main menu and handles user input
void switch_choice(int choice); // Executes the selected menu option
void enter_sales_data(); // Handles sales data entry
double get_sales(int month, int branch); // Prompts user to input sales for a specific month and branch
void display_sales(int branch_count, double sales[][MONTHS]); // Displays sales data in a tabular format
int get_number_of_branches(); // Prompts user to input the number of branches

// Main function: Entry point of the program
int main() {
    main_UI();
    return 0;
}

// Displays the main menu and handles user input
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

// Executes the selected menu option
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

// Prompts user to input sales for a specific month and branch
double get_sales(int month, int branch) {
    double sales;
    printf("Enter sales for month %d for branch %d: ", month + 1, branch + 1);
    scanf("%lf", &sales); 
    return sales;
}

// Displays sales data in a tabular format
void display_sales(int branch_count, double sales[][MONTHS]) {
    for (int i = 0; i < branch_count; i++) {
        printf("\nBranch %d\n", i + 1);
        for (int j = 0; j < MONTHS; j++) {
            printf("  Month %2d Sales: %.2lf\n", j + 1, sales[i][j]); // .2lf for 2 decimal places
        }
    }
}

// Handles sales data entry
void enter_sales_data() {
    int branch_count = get_number_of_branches(); // Get the number of branches
    double sales[branch_count][MONTHS]; // Create a 2D array to store sales data

    for (int i = 0; i < branch_count; i++) {
        for (int j = 0; j < MONTHS; j++) {
            sales[i][j] = get_sales(j, i); // Get sales for the current month and branch
        }
    }

    display_sales(branch_count, sales); // Display the collected sales data
}

// Prompts user to input the number of branches
int get_number_of_branches() {
    int count;
    printf("Enter number of branches: ");
    scanf("%d", &count);

    if (count <= 0) {  // validation to make sure that the user did not add negative value for the branches
        printf("Error: Number of branches must be greater than 0.\n");
        return 0;
    }

    return count;
}