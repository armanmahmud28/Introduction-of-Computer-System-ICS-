#include <stdio.h>

int main()
{
    float num1, num2, result;
    int option;

    printf("********************************\n");
    printf("*     Operations Manager Tool  *\n");
    printf("*     1. Add                   *\n");
    printf("*     2. Subtract              *\n");
    printf("*     3. Multiply              *\n");
    printf("*     4. Divide                *\n");
    printf("*     5. Modulus               *\n");
    printf("*     6. Exit                  *\n");
    printf("********************************\n");

    printf("Select an option (1-6): ");
    scanf("%d", &option);

    if (option == 6)
    {
        printf("Exiting the program. Goodbye!\n");
        return 0;
    }

    if (option < 1 || option > 5)
    {
        printf("Invalid selection. Please restart the program and select a valid option.\n");
        return 1;
    }

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (option)
    {
    case 1:
        result = num1 + num2;
        printf("The Result is: %.2f\n", result);
        break;
    case 2:
        result = num1 - num2;
        printf("The Result is: %.2f\n", result);
        break;
    case 3:
        result = num1 * num2;
        printf("The Result is: %.2f\n", result);
        break;
    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("The Result is: %.2f\n", result);
        }
        else
        {
            printf("Division by zero is not allowed.\n");
        }
        break;
    case 5:
        if ((int)num2 != 0)
        {
            result = (int)num1 % (int)num2;
            printf("The Result of %d %% %d (from %.2f %% %.2f) is: %.2f\n", (int)num1, (int)num2, num1, num2, result);
        }
        else
        {
            printf("Modulus by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid option. Please select a valid operation.\n");
        break;
    }

    return 0;
}

