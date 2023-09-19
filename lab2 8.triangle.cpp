/* triangle */
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three sides of a triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && a==c)
	printf("Equilateral");
	else if (a!=b && b!=c && c!=a)
	printf("Scalene");
	else
	printf("Isoceles");
	return 0;
}
