/* sum of digits of a number */
#include <stdio.h>
int main()
{
	int n,s=0;
	printf("Enter value for n: ");
	scanf("%d", &n);
	while (n>0)
	{
		s+=(n%10);
		n=n/10;
	}
	printf("sum of digits of n is %d",s);
	return 0;
}
