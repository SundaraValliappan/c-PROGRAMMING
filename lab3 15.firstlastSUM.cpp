/* first and last */
#include <stdio.h>
int main()
{
	int n,f,l,temp;
	printf("Enter value for n: ");
	scanf("%d", &n);
	l = n%10;
	while (n>0)
	{
		temp = n%10;
		n=n/10;
	}
	f = temp;
	printf("sum of first and last digits of n is %d",f+l);
	return 0;
}
