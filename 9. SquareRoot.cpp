/* Square Root */
#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	float b;
	printf("Enter a number: ");
	scanf("%d", &a);
	b = sqrt(a);
	printf("The root of given number is %f",b);
	return 0;
}
