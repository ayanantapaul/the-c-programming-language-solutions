/* -- Exercise 1.8 --
 * Write a program to count blanks, tabs and newlines.
 * */

#include <stdio.h>

int main() {

	// variable declaration 
	int c, newlines, blanks, tabs;

	// variable initialization 
	// set every counter to zero
	newlines = blanks = tabs = 0;

	// while loop 
	while ((c = getchar()) != EOF) {
		
		// if c is a newline, count it 
		if (c == '\n') 
			++newlines;  // adds 1 to the variable 'newlines'

		// else if c is a blank, count it 
		else if (c == ' ') 
			++blanks;  // adds 1 to the variable 'blanks'

		// else if c is a tab, count it 
		else if (c == '\t') 
			++tabs;  // adds 1 to the variable 'tabs'

		// to exit the loop, press 'q'
		else if (c == 'q') 

			// break the loop with break
			// and print info on screen
			// this will give u an idea of how while loops
			// work in C
			break;
	}

	// print information to the terminal screen
	printf("==> Newlines::  %d\n==> Blanks:: %d\n==> Tabs:: %d\n",
			newlines, blanks, tabs);

	// return 0 on successful completion 
	return 0;
}
