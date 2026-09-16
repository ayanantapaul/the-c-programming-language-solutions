/* -- Exercise 1.9 --
 * Write a program to copy a program to its output, replacing 
 * each string of one or more blanks by a single blank. 
 * */

#include <stdio.h>

int main() {
	
	// variable initialization and declartion in one line 
	int c;
	int previous = -1;	// initialized with negative one 
	
	// while loop
	while ((c = getchar()) != EOF) {
		
		// if it is only a single blank do nothing
		if (c == ' ' && c == previous)
			;	// this is a null statement and it  
				// says "if this happens do nothing" 

		// else do this 
		// the else statement dosn't need any condition 
		else {
			// set c to previous 
			previous = c;

			// print the output to terminal 
			putchar(c);
		}
	}

	// return 0 on successful execution 
	return 0;
}
