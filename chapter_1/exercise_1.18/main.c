/* -- Exercise 1.18 -- 
 * Write a program to remove trailing blank and tabs from each 
 * line of input, and delete entirely blank lines. 
 * */

#include <stdio.h>

#define MAXLEN 1001

/* function prototype */
int main(void);    // just for fun
int custom_getline(char line[], int limit);
int remove_trailing(char line[], int limit);

/* main */
int main(void) {

	char line[MAXLEN];
	int length = 0;

	while ((length = custom_getline(line, MAXLEN)) > 0) {
		printf(":: The length before removing trailing spaces is %d chars.\n", length);
		if ((length = remove_trailing(line, MAXLEN)) > 0) {
			printf("%s", line);
			printf(":: The length after removing trailing spaces is %d chars.\n", length);
		}
		printf("\n");
	}

	return 0;

}

/* custom_getline: takes the line and the maximum character limit 
 * of a line and returns the length */
int custom_getline(char line[], int limit) {
	int i, c, length = 0;
	for (i = 0; i < (limit - 1) && (c = getchar()) != EOF && c != '\n'; i++, length++) {
		line[i] = c;
	}
	if (c == '\n') {
		line[i] = c;
		i++;
		length++;
	} else if (i >= limit - 1) {
		int j;
		while ((j = getchar()) != EOF) {
			length++;
		}
		if (j == '\n') {
			length++;
		}
	}
	line[i] = '\0';
	return length;
}

/* remove_trailing: takes the line and the maximum character limit
 * for a line and removes the trailing the white spaces */
int remove_trailing(char line[], int limit) {
	int i = 0;
	while (line[i] != '\n' && i < limit) {
		i++;
	}
	if (i == limit) {
		return i;
	}
	i--;
	while ((line[i] == ' ' || line[i] == '\t') && i >= 0) {
		i--;
	}
	if (i >= 0) {
		i++;
		line[i] = '\n';
		i++;
		line[i] = '\0';
	}
	return i;
}





