#include <stdio.h>
int main() {
    char choice;
    float num1, num2;
    float operation;
    do {
        printf("\n----- Menu_Driven_Calculator -----\n");
        printf("select 1 for Addition\n");
        printf("select 2 for Subtraction\n");
        printf("select 3 for Multiplication\n");
        printf("select 4 for Division\n");;
        printf("select E for Exit\n");
        printf("Enter your choice (1-E): \n");
        scanf("%c", &choice);

        if (choice >= '1' && choice <= '4') {
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);
        }
        switch (choice) {
            case '1':
                operation = num1 + num2;
                printf("Addition of %.2f + %.2f = %f\n", num1, num2, operation);
                break;
            case'2':
                operation = num1 - num2;
                printf("Subtraction of %.2f - %.2f = %f\n", num1, num2, operation);
                break;
            case '3':
                 operation= num1 * num2;
                printf("Multiplication of %.2f * %.2f = %f\n", num1, num2, operation);
                break;
            case '4':
                if (num2 != 0) {
                    operation = num1 / num2;
                    printf("Division of %.2f / %.2f = %2f\n", num1, num2, operation);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 'E':

                printf("You can exit now");
                break;
        }
    }
    while( choice!='E');
}






