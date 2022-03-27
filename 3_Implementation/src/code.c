
#include <stdlib.h>
#include "func.h"

void exit();

int main()
{

    int choice;
    int x, y, result;
    float res;
    do
    {

        printf("\n\n------------------------------SCIENTIFIC CALCULATOR------------------------------\n \n");
        printf("Select an operation to perform the calculation in C Calculator:\n"); // Choose from list of operations
        printf("1. Addition \t\t\t\t 7. Factorial\n");
        printf("2. Subtraction\t\t\t\t 8. Power \n");
        printf("3. Multiplication \t\t\t 9. Exponential \n");
        printf("4. Division \t\t\t\t 10. Log \n");
        printf("5. Square \t\t\t\t 11. Modulus \n");
        printf("6. Square Root \t\t\t\t 12. Exit \n \n");
        printf("Enter your choice [1-12]:  ");

        scanf("%d", &choice); // Accepts integer input
        printf("\n\n");
        switch (choice)
        {
        case 1:
            printf("Enter first number : ");
            scanf("%d", &x);
            printf("\nEnter second number : ");
            scanf("%d", &y);
            result = addition(x, y); // call the addition() function to add two numbers
            printf("\nThe addition of %d + %d is: %d \n\n", x, y, result);
            break;

        case 2:
            printf("Enter first number : ");
            scanf("%d", &x);
            printf("\nEnter second number : ");
            scanf("%d", &y);
            result = subtract(x, y); // call the subtract() function to subtract two numbers
            printf("\nThe subtraction of %d - %d is: %d\n\n", x, y, result);
            break;

        case 3:
            printf("Enter first number : ");
            scanf("%d", &x);
            printf("\nEnter second number : ");
            scanf("%d", &y);
            result = multiply(x, y); // call the multiply() function to multiply two numbers
            printf("\nThe multiplication of %d * %d is: %d\n\n", x, y, result);
            break;

        case 4:
            printf("Enter first number : ");
            scanf("%d", &x);
            printf("\nEnter second number : ");
            scanf("%d", &y);
            res = divide(x, y); //  call the divide() function to divide the given numbers
            printf("\nThe division of %d / %d is: %0.2f\n\n", x, y, res);
            break;

        case 5:
            printf("Enter the number : ");
            scanf("%d", &x);
            result = sq(x); // call the sq() function to get the square of given number
            printf("\nThe Square of %d is: %d\n\n", x, result);
            break;

        case 6:
            printf("Enter the number : ");
            scanf("%d", &x);
            res = sqrt1(x); // call the sqrt1() function to get the square root of given number
            printf("\nThe Square Root of %d is: %0.2f\n\n", x, res);
            break;

        case 7:
            printf("Enter the number : ");
            scanf("%d", &x);
            result = factorial(x); // call the fact() function to get the factorial of given number
            printf("\nThe factorial of %d is: %d\n\n", x, result);
            break;

        case 8:
            printf("Enter first number : ");
            scanf("%d", &x);
            printf("\nEnter second number : ");
            scanf("%d", &y);
            res = power(x, y); // call the pow() function to get the power of given number
            printf("\nThe result of %d ^ %d is: %0.2f\n\n", x, y, res);
            break;

        case 9:
            printf("Enter the number : ");
            scanf("%d", &x);
            res = exponent(x); // call the exp() function to get the exponential of given number
            printf("\nThe exponential value of %d is: %0.2f\n\n", x, res);
            break;

        case 10:
            printf("Enter the number : ");
            scanf("%d", &x);
            res = logarithm(x); // call the log() function to get the logarithm value of given number
            printf("\nThe log of %d is: %0.2f\n\n", x, res);
            break;

        case 11:
            printf("Enter first number : ");
            scanf("%d", &x);
            printf("\nEnter second number : ");
            scanf("%d", &y);
            result = mod(x,y); // get the mod value of given numbers
            printf("\nThe modulus of %d / %d is: %d\n\n", x, y, result);
            break;

        case 12:

            printf(" \n\n*****************************************************************************************\n ");
            exit(0); // call the exit() function to exit from the program
            break;   // break the function

        default:
            printf("Wrong choice. Please try again!!\n");
            break;
        }
    } while (choice != 12);

    return 0;
}