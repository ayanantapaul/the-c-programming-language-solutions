/* -- Exercise 1.17 --
 * Write a program to print ll the input lines that are no longer than 80 
 * characters.
 * */

#include <stdio.h>

/* maximum length that a variable can have */
#define MAXLEN 1001

/* my_getline - function for finding length of an array. it's just like the 
 * getline function defined earlier in the book 
 * */
int my_getline(char s[], int limit) {
	int i, c;
	for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n' ;i++) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		i++;
	}
	s[i] = '\0';

	/* here i is the length of the character array */
	return i;
}

/* main */
int main(void) {
	
	/* variable declaration */
	char line[MAXLEN];
	int len;

	/* iterating through it while the length is greater than zero */
	while ((len = my_getline(line, MAXLEN)) > 0) {
		if (len > 80) {
			printf("%s\n", line);
		}
	}

	return 0;
}
