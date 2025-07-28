#ifndef SALES_H
#define SALES_H
#define MONTHS 12 // months from 1 -> 12

double get_sales(int month, int branch); // Prompts user to input sales for a specific month and branch
void display_sales(int branch_count, double sales[][MONTHS]); // Displays sales data in a tabular format
void enter_sales_data(); // Handles sales data entry
int get_number_of_branches(); // Prompts user to input the number of branches

#endif // SALES_H