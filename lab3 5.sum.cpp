/* sum of first n  */
#include <stdio.h>
int main()
{
	int n,s;
	printf("Enter value for n: ");
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
	{
		s += i;
	}
	printf("The sum of first n natural numbers is %d", s);
	return 0;
}
