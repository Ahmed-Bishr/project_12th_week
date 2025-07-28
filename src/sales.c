#include <stdio.h>
#include "sales.h"

double get_sales(int month, int branch) {
    double sales;
    printf("Enter sales for month %d for branch %d: ", month + 1, branch + 1);
    scanf("%lf", &sales); 
    return sales;
}

void display_sales(int branch_count, double sales[][MONTHS]) {
    for (int i = 0; i < branch_count; i++) {
        printf("\nBranch %d\n", i + 1);
        for (int j = 0; j < MONTHS; j++) {
            printf("  Month %2d Sales: %.2lf\n", j + 1, sales[i][j]); // .2lf for 2 decimal places
        }
    }
}

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