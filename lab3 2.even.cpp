/* even numbers */
#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("The even numbers till n are : \n");
	for (int i = 1; i <= n; i ++)
	{
		if (i%2 == 0)
		printf("%d ",i);
	}
	return 0;
}
