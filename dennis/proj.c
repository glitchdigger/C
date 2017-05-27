#include <stdio>

int main()
{	
	printf("whatever\n");
	int c;			/* Variable Declarations */
        long nc;

	                         /* Copy Input to Output */
	c = getchar();
	if (c != EOF) {
		putchar(c);
		c = getchar();
		else
			nc = 0;
			while (getchar() != EOF)
			++nc;
			printf("%1d\n", nc);
}
}
