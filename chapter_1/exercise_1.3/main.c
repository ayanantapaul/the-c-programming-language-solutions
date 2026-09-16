/* -- Exercise 1.3 --
 * Modify the temperature conversion table to print a heading above the table 
 * */

#include <stdio.h>

// ==> This is a comment in C
/* ==> This is a comment in C */ 

/* The 'int' in the 'int main()' declares the return
 * type of the function called 'main' */
int main() {
	
	// variable declaration 
	float fahr, celsius;
	int lower_limit, upper_limit, step_size;

	// variable initialization 
	lower_limit = 0;	// lower limit of temperature table
	upper_limit = 300;	// upper limit of temperature table 
	step_size = 20;		// step size
	
	// set fahr equal to lower_limit of temperature table 
	fahr = lower_limit;

	// printing table column heading 
	printf("Fahrenheit -> Celsius\n");

	// running while loop to print reults to the terminal 
	while (fahr <= upper_limit) {

		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%.1f°F -> %.1f°C\n", fahr, celsius);

		// fahr will increase by step_size i.e, 20
		fahr = fahr + step_size;
	}

	return 0;
}
