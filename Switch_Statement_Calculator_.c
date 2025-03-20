#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    
    // Get user input for n
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Invalid input for n\n");
        return EXIT_FAILURE;
    }

    // Checking to see if n is correct
    printf("n = %d\n", n); // Printing n to confirm it's correct

    for (int i = 0; i < n; i++) 
    {
        int a, b;
        char op;
        
        // Get user input for calculation
        printf("Enter calculation (e.g., 5 + 3): ");
        if (scanf("%d", &a) != 1) {
            printf("Error: Invalid input\n");
            return EXIT_FAILURE;
        }
        
        getchar();  // Getting rif of the newline before reading op
        
        if (scanf(" %c", &op) != 1) {
            printf("Error: Invalid operator input\n");
            return EXIT_FAILURE;
        }

        if (scanf("%d", &b) != 1) {
            printf("Error: Invalid input\n");
            return EXIT_FAILURE;
        }

        switch(op) 
        {
            case '+':
                printf("%d\n", a + b);
                break;

            case '-':
                printf("%d\n", a - b);
                break;

            case '*':
                printf("%d\n", a * b);
                break;

            case '/': 
                if (b != 0)
                {
                    printf("%.2f\n", (float)a / b);
                }
                else 
                {
                    printf("Error: Division by zero\n");
                } 
                break;

            case '%':
                if (b != 0) 
                {
                    printf("%d\n", a % b);
                } 
                else 
                {
                    printf("Error: Modulo by zero\n");
                }
                break;
        
            default: 
                printf("Error: Invalid operator\n");
        }
    }
    
    return EXIT_SUCCESS;
}
