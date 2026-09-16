/* -- Exercise 1.11 --
 * How would you test the word count program?
 * What kind of inputs are most likely to uncover bugs if there are any?
 * */

/* Given word count program */

#include <stdio.h>

#define IN 1		// inside a word 
#define OUT 0		// outside a word 

int main(void) {
	
	int c, line, word, character, state;

	state = OUT;
	line = word = character = 0;
	while ((c = getchar()) != EOF) {
		++character;
		if (c == '\n')
			++line; 

		if (c == ' ' || c == '\n' || c == '\t') 
			state = OUT;

		else if (state == OUT) {
			state = IN;
			++word;
		}
	}

	printf("------------\n==> Line: %d\n==> Word: %d\n==> Char: %d\n------------\n",
			line, word, character);

	return 0;
}

/* Edge cases that can produce bugs 
 * 1. with no inputs
 * 2. with only word as input 
 * 3. with a lot of spaces and a tab or in combination
 */
