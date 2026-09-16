/*  -- Exercise 1.12 --
 *  Write a program that prints its input one word per line.
 */

#include <stdio.h>

#define IN 1 
#define OUT 0

int main(void) {

	/* 
	 * variable declartion 
	 */
	int c, state;

	/*
	 * initially the state is OUT
	 * */
	state = OUT;

	/*
	 * read the input character by character using 
	 * getchar() until EOF is reached 
	 * */
	while ((c = getchar()) != EOF) {

		if  (c == ' ' || c == '\t' || c == '\n') {
			/*
			 * if c is any of the above characters and the 
			 * state is IN this means the word just ended 
			 * therefore assign the state to OUT and go to 
			 * the next line
			 * */
			if (state == IN) {
				state = OUT;
				putchar('\n');
			} else {
			       /*
				* this means that if the character read is 
				* any one of tab, blank or a newline and state 
				* is OUT just ignore the trailing spaces, tabs 
				* or blanks
				* */
				;	// simply do nothing 
			}
		
		} else if (state == OUT) {
		       /*
			* if the character read is not a space, tab
			* or newline and state is OUT
			* here the word is just starting
			* therefore assign state to IN and
			* print the character in the terminal 
			*/
			state = IN;
			putchar(c);
		} else {
		       /*
			* if the character read is not a white space, blank or 
			* a tab and state is already IN then just print the 
			* character in the terminal 
			* */ 
			putchar(c);
		}

	}

	return 0;
}
