/*SWAPPING*/
#include <stdio.h>
int main()
{
	int a, b, temp;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	temp = b;
	b = a, a = temp;
	printf("The two numbers are: %d %d", a, b);
	return 0;
}
