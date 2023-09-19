/* fibonacci */
#include <stdio.h>
int main()
{
	int n,a=0,b=1,c;
	printf("Enter value for n: ");
	scanf("%d", &n);
	if (n>2)
	{
		for (int i = 2; i < n; i++)
		{
			c = a+b;
			a = b;
			b = c;		
		}
		printf("%d",c);
	}	
	else if (n==1)
	printf("%d",a);
	else if (n==2)
	printf("%d",b);
	return 0;
}
