#include <stdio.h>

#define MONTHS 12 // constant for months number from 1 -> 12

// prototype to avoid implicit declaration of function
void main_UI();
void switch_choice(int choice);
void sales_Data(int branches[MONTHS][]); 
int get_number_of_branches();

// functions to get the branches numbers ( prompt by the user for dynamic
// software)
int get_number_of_branches() {
  int number_of_branches;

  printf("Enter number of branches : ");
  scanf("%d", &number_of_branches);

  return number_of_branches;
}

int get_sales(int month) {
    int sales;
  
    printf("Enter sales for month %d : " , month);
    scanf("%d", &sales);
  
    return sales;
  }

// Enter Sales Data function with 2d Array for branch [month][]
void sales_Data(int branches[MONTHS][]) {

}

// function contain the main UI for the Application
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

    printf("\nChoose from the menu : ");
    scanf("%d", &choice);

    switch_choice(choice);

    printf("\nDo you want to continue? (y/n): ");
    scanf(" %c", &resume);
  } while (resume == 'y' || resume == 'Y');
}

// function for the change the choice from the UI menu in the Application
void switch_choice(int choice) {
  switch (choice) {
  case 1:
    printf("1. Enter Sales Data\n");
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

int main() {

  main_UI();

  return 0;
}