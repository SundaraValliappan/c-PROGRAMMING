/* factorial  */
#include <stdio.h>
int main()
{
	int n,s=1;
	printf("Enter value for n: ");
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
	{
		s *= i;
	}
	printf("The factorial of n is %d", s);
	return 0;
}
