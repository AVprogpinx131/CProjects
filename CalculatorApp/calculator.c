#include <stdio.h>
#include <math.h>

int main()
{
    // declaring values
    char operator; 
    double n1, n2, result;
    int roundedResult;
    
    // asking for user input
    printf("Enter an operation (+, -, /, *, ^): ");
    scanf("%lf %c %lf", &n1, &operator, &n2);
    
    // operation logic
    switch(operator){
        case '+':
            result = n1 + n2;
            roundedResult = round(n1 + n2);
            printf("Floating answer: %lf\nRounded answer is: %d", result, roundedResult);
            break;

        case '-':
            result = n1 - n2;
            roundedResult = round(n1 - n2);
            printf("Floating answer: %lf\nRounded answer is: %d", result, roundedResult);
            break;

        case '*':
            result = n1 * n2;
            roundedResult = round(n1 * n2);
            printf("Floating answer: %lf\nRounded answer is: %d", result, roundedResult);
            break;

        case '/':
            result = n1 / n2;
            roundedResult = round(n1 / n2);
            printf("Floating answer: %lf\nRounded answer is: %d", result, roundedResult);
            break;

        case '^':
            result = pow(n1, n2);
            roundedResult = round(pow(n1, n2));
            printf("Floating answer: %lf\nRounded answer is: %d", result, roundedResult);
            break;

        default:
            printf("Error! Operator is not correct");
    }

    return 0;
}
