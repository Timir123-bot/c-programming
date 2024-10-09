#include <stdio.h> 

void main() {
    int i, terms;  

    printf("Input number of terms : ");  // Print a message to prompt user input.
    scanf("%d", &terms);  // Read the value of 'ctr' from the user.

    for (i = 1; i <= terms; i++) { 
        printf("Number is : %d and cube of the %d is :%d \n", i, i, (i * i * i));  // Print the number, its cube, and message.
    }
}
