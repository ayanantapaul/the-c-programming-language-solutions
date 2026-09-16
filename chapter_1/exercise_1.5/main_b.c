/*
 * -- Exercise 1.5.A -- 
 *  Modify the temperature conversion program to print the table in reverse order 
 *  that is from 300 degrees to 0.
 *  */

#include <stdio.h>

// define variables 
#define LOWER_LIMIT 0		// lower limit of table
#define UPPER_LIMIT 300		// upper limit of table 
#define STEP_SIZE 20		// step size 

int main() {

	// Conversion for Celsius to Fahrenheit 

	// variable declaration 
	float celsius, fahr;
	int upper_limit, lower_limit, step_size;

	// run for loop to print to terminal 
	for (celsius = UPPER_LIMIT; celsius >= LOWER_LIMIT; celsius -= STEP_SIZE){
		
		// if this loop for the first time print the heading
		if (celsius == UPPER_LIMIT)
			printf("Celsius -> Fahrenheit\n");

		// convert celsius to fahrenheit
		fahr = (9.0/5.0) * celsius + 32.0;

		// print output to terminal 
		printf("%.1f°F -> %.1f°C\n", celsius, fahr);
		 
	}

	return 0;
}
