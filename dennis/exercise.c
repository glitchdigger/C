#include <stdio.h>

main()
{
	int c, score;
	score = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n' || c == '\0' || c == '\t'){
			++score;
		printf("%d", score);
		}
}	
