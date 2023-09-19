/* three greatest numbers */
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three bowling technique points: ");
	scanf("%d%d%d",&a, &b, &c);
	if (a==b)
	{
		if(a>c)
		printf("%d",a);
		else
		printf("%d",c);
	}
	else if (a==c)
	{
		if(a>b)
		printf("%d",a);
		else
		printf("%d",b);
	}
	else if (c==b)
	{
		if(a>c)
		printf("%d",a);
		else
		printf("%d",c);
	}
	else if (a>b && a>c)
	printf("%d",a);
	else if (b>c)
	printf("%d",b);
	else
	printf("%d",c);
	return 0;
}
