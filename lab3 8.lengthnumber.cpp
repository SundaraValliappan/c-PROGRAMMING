/* length of a number */
#include <stdio.h>
int main()
{
	int n,c=0;
	printf("Enter value for n: ");
	scanf("%d", &n);
	while (n>0)
	{
		c++;
		n=n/10;
	}
	printf("Length of number is %d",c);
	return 0;
}
