#include <stdio.h>

/* Count # of characters in input; Vers 1.0 */

main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
	++nc;
	printf("%1d\n", nc);
}
