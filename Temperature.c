#include<stdio.h>
/*program to convert celsius to farenheit*/
int main()
{
	float f, c;
	float l, u, s;
	l = 0;
	u = 300;
	s = 20;
	c = l;
	printf("celsius to farenheit\n");
	printf("--------------------\n");
	while(c<=u){
		f = (c * (9/5))+ 32;
		printf("%3.0f\t%6.2f\n",c,f);
		c = c + s;
	}
	return 0;
}
