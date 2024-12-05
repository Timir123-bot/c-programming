#include <stdio.h>


void add(int *a, int *b);
void subtract(int *a, int *b);
void multiply(int *a, int *b);
void divide(int *a, int *b);

int main() {
    int num1, num2, choice;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    
    switch(choice) {
        case 1:
            add(&num1, &num2);  
            break;
        case 2:
            subtract(&num1, &num2);  
            break;
        case 3:
            multiply(&num1, &num2);  
            break;
        case 4:
            divide(&num1, &num2); 
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}


void add(int *a, int *b) {
    int result = *a + *b;
    printf("Addition result: %d\n", result);
}


void subtract(int *a, int *b) {
    int result = *a - *b;
    printf("Subtraction result: %d\n", result);
}


void multiply(int *a, int *b) {
    int result = *a * *b;
    printf("Multiplication result: %d\n", result);
}


void divide(int *a, int *b) {
    if (*b != 0) {
        float result = (float)(*a) / (*b);
        printf("Division result: %.2f\n", result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
