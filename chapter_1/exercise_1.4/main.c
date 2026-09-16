/* -- Exercise 1.4 --
 * Write a program to print the corresponding Celsius to Fahrenheit table 
 * */

#include <stdio.h>

int main() {
	
	//  variable declaration 
	float celsius, fahr;
	int lower_limit, upper_limit, step_size;

	// variable initialization 
	lower_limit = 0;	// lower limit of temperature table
	upper_limit = 300;	// upper limit of temperature table 
	step_size = 20;		// step size
	
	// set celsius equal to lower_limit of temperature table 
	celsius = lower_limit;

	// printing table column heading 
	printf("Celsius -> Fahrenheit\n");

	// running while loop to print reults to the terminal 
	while (celsius <= upper_limit) {

		// convert celcius to fahrenheit 
		fahr = (9.0/5.0) * celsius + 32.0;

		// print to result to terminal
		printf("%.1f°C -> %.1f°F\n", celsius, fahr);

		// celsius will increase by step_size i.e, 20
		celsius = celsius + step_size;
	}

	return 0;
}
