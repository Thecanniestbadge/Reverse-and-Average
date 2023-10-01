// Programmer:      Thecanniestbadge
// Date:            06/26/2023
// Program Name:    Reverse and Average
// Description:     This program prompts the user to enter 10 integers and stores them in an array. 
//                  It then reverses the order of the array and stores the reversed elements in a second array. 
//                  Lastly, it computes the average of corresponding elements in the two arrays and stores the results in a third array.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
    // Constant and Variable Declarations
    // Array to hold averages
    double average[10];
     // Arrays to hold original and reversed input
    int original[10];
    int reverse[10]; 
    // Counter variable for loops
    int i; 
    // *** INPUT ***
    // Getting the values from the user
    for (i = 0; i < 10; i++) {
        printf("Enter value #%d: ", i + 1);
        scanf("%d", &original[i]);
    }
    // *** CALCULATIONS ***
    // Reversing the array and storing it into the reverse array
    for (i = 0; i < 10; i++) {
        reverse[i] = original[9 - i];
    }

    // Calculating the average and storing it into the average array
    for (i = 0; i < 10; i++) {
        average[i] = (original[i] + reverse[i]) / 2.0;
    }
    // *** OUTPUT ***
    // Displaying the arrays
    // First array
    printf("\nThe original array...\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t", original[i]);
    }
    // Second array
    printf("\nThe reverse array...\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t", reverse[i]);
    }
    // Third array
    printf("\nThe average array...\n");
    for (i = 0; i < 10; i++) {
        printf("%.1f\t", average[i]);
    }
    printf("\n"); // Blank line
    printf("\n"); // Blank line
    return 0;
} // end main()
