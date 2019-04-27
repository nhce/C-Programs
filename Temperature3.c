#include<stdio.h>
#define LOWER 0 /*defines the lower limit*/
#define UPPER 300 /*defines the upper limit*/
#define STEP 20 /*defines the increment*/

/*program to convert farenheit to celsius*/
int main()
{
	int fahr;
	for(fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP){
		printf("%3d %6.2f\n",fahr,(5.0/9.0)*(fahr-32));
	}
	return 0;
}
