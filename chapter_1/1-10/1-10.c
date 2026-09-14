/* -- Exercise 1.10 --
 * Write a program to copy its input to its output, replacing each tab by \t,
 * each backspace by \b, and each backslash by \\. This makes tabs and tabs 
 * visible in an unambigous way.
 * */

#include <stdio.h>

int main(void) {
	
	// variable declaration   
	int c;

	// while loop 
	while ((c = getchar()) != EOF) {
		
		// if the character is a tab
		if (c == '\t') 
			printf("\\t");	// never ignore newline charcter

		// if the character is a backspace 
		if (c == '\b') 
			printf("\\b");

		// if the character is a backslash
		if (c == '\\')
			printf("\\");

		// if the character is not a tab
		if (c != '\t')
			// go check if the character is not a backspace
			if (c != '\b')
				// check if is a backspace
				if (c != '\\')
					// finally print the variable 
					putchar(c);
	}

	// return 0 on successful completion 
	return 0;
}
