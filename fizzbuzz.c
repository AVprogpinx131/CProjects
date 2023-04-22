
#include <stdio.h>

void fizzBuzz(int number) {
    for(int i = 0; i <= number; i++) {
        if (i % 3 == 0 & i % 5 == 0) {
            printf("Fizz Buzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int number; 
    printf("Enter a number: ");
    scanf("%d", &number);
    
    fizzBuzz(number);
    return 0;
}
