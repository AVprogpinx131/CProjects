#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>


int main() {
	// declaring values
	int userInput, randomNumber;
	int guesses = 0;

	printf("Enter a number: ");
	scanf("%d", &userInput);

	srand(time(NULL)); 
	randomNumber = rand() % (userInput + 1);

	do {
		printf("Make a guess: ");
		scanf("%d", &userInput);
		guesses++;

		if (userInput > randomNumber) {
			printf("You were above the number\n");
		} else if (userInput < randomNumber) {
			printf("You were below the number\n");
		} else {
			printf("You have guessed the number in %d attempts", guesses);
		}
		
	} while (randomNumber != userInput);

	
	return 0;
}
