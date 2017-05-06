#include <stdio.h>

/*Program: Prints a table of temperature equivaliencies between Farenheit & Celsius  */

main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;	/*lower limit of temperature scale */
	upper = 300;	/*upper limit of temperature scale */
	step = 20;	/*step size */
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
