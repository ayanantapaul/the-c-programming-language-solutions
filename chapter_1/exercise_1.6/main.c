/* -- Exercise 1.6 --
 * Verify that the expression "getchar() != EOF" is 0 or 1
 * */

#include <stdio.h>

int main() {
	
	// user input 
	printf("==> Enter a character : ");
	
	// forces the immediate writting of all buffered data 
	// in the standard output stream 
	fflush(stdout);
	
	// print result to terminal 
	/* -- explanation --
	 * ==> "getchar()" reads a character from the input (usually the keyboard) and returns it as int
	 * ==> "getchar() != EOF" this is a comarison that evaluates 1 if true or 0 if false (0 is returned if you press Ctrl+C)
	 * ==> "printf(...)" this function prints the formatted string 
	 * */ 
	printf("==> getchar() != EOF : %d\n", getchar() != EOF);

	return 0;
}
