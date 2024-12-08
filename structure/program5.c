#include <stdio.h>
struct Complex {
    float real;
    float imaginary;
};

int main() {
    struct Complex num1, num2, sum;

   
    printf("Enter the real part of the first complex number: ");
    scanf("%f", &num1.real);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%f", &num1.imaginary);

   
    printf("Enter the real part of the second complex number: ");
    scanf("%f", &num2.real);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%f", &num2.imaginary);

  
    sum.real = num1.real + num2.real;        
    sum.imaginary = num1.imaginary + num2.imaginary; 

    
    printf("\nSum of the complex numbers: %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}
