#include <stdio.h>

/* copy input to output; 1st verion */

main()
{
	int keyboard;

	keyboard = getchar();
	while (keyboard != EOF) {
		putchar(keyboard);
		keyboard = getchar();
	}
}
