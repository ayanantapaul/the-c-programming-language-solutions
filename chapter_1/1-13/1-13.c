/* -- Exercise 1.13 --
 * Write a program to print a histogram of lengths of words in its input.
 * It is easy to gray histograms with the horizontal bars; 
 * a vertical orientation is more chalanging.
 * */

#include <stdio.h> 

/* maximum length length of a word */
#define MAXLEN 10

int main(void) {
	
	/* declaration of a integer array and assigning all 
	 * the values to zero 
	 * */
	int wordLengths[MAXLEN] = {0};

	/* here we are declaring c and assigning zero to 
	 * currentLength variable 
	 * */
	int c, currentLength = 0;

	while ((c = getchar()) != EOF) {
		
		/* if c is any of the following cases it means :
		 * case_1: the variable c is a space/tab after a word.
		 * case_2: c is spaces/tabs which are situated at the first of a line. 
		 * case_3: c can be a newline character at the end of the line.
		 * if c ever comes across such condition it is going to add 1 to
		 * wordLengths[i], that is our program found 1 word of length i 
		 * */
		if (c == ' ' || c == '\t' || c == '\n') {
				
			/* check if the word is within the max length */
			if (currentLength > 0 && currentLength < MAXLEN) {
				++wordLengths[currentLength];
			}

			/* then we are going to assign currentLength to 0*/
			currentLength = 0;
		}

		/* if c is not any of the space/newline/tabs then 
		 * c must be a character other than those characters
		 * therefore add 1 to the variable currentLength 
		 * i.e, count the no of characters of the word
		 * */
		else {
			++currentLength;
		}


		/* to get out of the while loop press "`" */
		if (c == '`') {
			break;
		}
	}

	/* now we are going to iterate through the array 
	 * and print the histogram to the terminal 
	 * */
	printf("---- Results ----\n");
	for (int i = 1; i < MAXLEN; i++) {
		printf("Words of length %d :: ", i);
		for (int j = 0; j < wordLengths[i]; j++) {
			printf("*");
			}
		printf("\n");
	}

	return 0;
}
