#include<stdio.h>

/*program to copy character from input to output*/
int main()
{
	int c;
	c = getchar();
	while(c != EOF){
		putchar(c);
		c = getchar();
	}
	return 0;
}
