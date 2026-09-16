/* -- Exercise 1.2 --
 * Experiment to find out what happens when printf's argument 
 * string contains \c, where c is some character not listed above.
 */

/* the escape sequence that were listed above there in the book are ::
 * \n -> newline 
 * \t -> tab
 * \b -> backspace
 * \\ -> backslash(\)
 * \" -> double-quotes(")
 */

#include <stdio.h>

int main(void) {
	
	// print the message to screen 
	printf(" \\c <c is some charcter not listed above> \n");

	// return 0 on successful completion of code 
	return 0;
}

/* Your task is to check wether you get any error if you try 
 * with character that are not listed above
 */
