#include <stdio.h>

int factorial(int n1){
    if(n1 == 0){
        return 1;
    }else{
        return n1 * factorial(n1 - 1);
    }
}

int fibonacci(int n2){
    if(n2 == 0){
        return 0;
    }else if(n2 == 1){
        return 1;
    }else{
        return fibonacci(n2 - 1) + fibonacci(n2 - 2);
    }
}

int main()
{
    int firstNumber;
    int secondNumber;

    printf("Insert a number to find factorial: ");
    scanf("%d", &firstNumber);
    printf("Factorial of %d is %d\n", firstNumber, factorial(firstNumber));

    printf("Insert a number to find fibonacci sequence: ", secondNumber);
    scanf("%d", &secondNumber);
    
    for(int i = 0; i < secondNumber; i++){
        printf("%d ", fibonacci(i));
    }
    return 0;
}



