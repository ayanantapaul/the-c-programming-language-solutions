/* -- Exercise 1.17 --
 * Write a program to print all the input lines that are longer than 80 
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

		/* if the line is greater than or equals 80 chars 
		 * then print it to screen */
		if (len >= 80) {
			printf("%s", line);

		/* else if the line is less than 80 chars, stop the execution 
		 * of the program, (you might edit it so that nothing happens 
		 * when this type of situation is faced) */
		} else if (len < 80) {
			return 0;
		}
	}
}
