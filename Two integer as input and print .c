#include <stdio.h>

int main() 
{
    int num1, num2;
    int sum, diff, prod;
    float quotient;

    
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    
    if (num2 != 0)
     {
        quotient = (float)num1 / num2;
        printf("Quotient: %.2f\n", quotient);
     } 
     else 
    {
        printf("Division by zero is not allowed.\n");
    }

    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);

    return 0;
}