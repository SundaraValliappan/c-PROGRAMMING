/* binary to decimal */
#include <stdio.h>
#include <math.h>
int main()
{
	int n,s=0,c=0;
	printf("Enter value for binary: ");
	scanf("%d", &n);
	while (n>0)
	{
		s+= (n%10)*pow(2,c);
		c++;
		n=n/10;
	}
	printf("decimal of number is %d",s);
	return 0;
}
