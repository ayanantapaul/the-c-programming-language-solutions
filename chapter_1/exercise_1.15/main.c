/* -- Exercise 1.15 -- 
 * Rewrite the temperature conversion program of section 1.2 to 
 * use a function for convertion.
 * */

#include <stdio.h>

#define UPPER_LIMIT 300	// upper limit 
#define LOWER_LIMIT 0	// lower limit 
#define STEP 20		// step size

/* function prototype */
float fahr_to_cels(float fahr);

/* main */
int main(void) {
	/* itering through the range, we print the result in the terminal */
	for (int i = LOWER_LIMIT; i < UPPER_LIMIT; i += STEP) {
		printf("%d°F -> %0.1f°C\n", i, fahr_to_cels(i));
	}
	return 0;
}

/* fahrenheit to celsius converter */
float fahr_to_cels(float fahr) {
	float cels = 5 * (fahr - 32) / 9;
	return cels;
}

