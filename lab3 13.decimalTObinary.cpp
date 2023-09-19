/* decimal to binary */
#include <stdio.h>
#include <math.h>
int main()
{
	int n,s=0,c=0;
	printf("Enter value for decimal: ");
	scanf("%d", &n);
	while (n>0)
	{
		s+= (n%2)*pow(10,c);
		c++;
		n=n/2;
	}
	printf("binary form of number is %d",s);
	return 0;
}
