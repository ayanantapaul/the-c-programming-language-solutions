/* -- Exercise 1.14 --
 * Write a program to print a histogram of frequencies of different
 * characters in its input.
 * */

#include <stdio.h>

/* N is the number of ASCII characters */
#define N 128 

int main(void) {

	/* variable declaration for 'c' 
	 * and initialization and assignment of 
	 * all the elements to zero for integer 
	 * array 'characters[N]'.
	 * */
	int c, characters[N] = {0};

	while ((c = getchar()) != EOF) {
		
		/* if c is an ascii character */
		if (c >= 0 && c < N ) {
			characters[c]++;
		/* if c is not one of them do nothing */
		} else {;}  

		/* to break out of the loop press q */
		if (c == '`') {
			break;
		}

	}

	/* now iter through the integer array to print 
	 * the gathered information on the terminal 
	 * */
	for (int i = 0; i < N; i++) {
		if (characters[i] > 0) {
			printf("%c | ", i);
			for (int j = 0; j < characters[i]; j++) {
				putchar('*');
			}
			putchar('\n');
		}
	}
	
	return 0;
}
