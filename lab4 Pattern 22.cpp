#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(int i1=0; i1<n; i1++)
	{
		for(int j1=0; j1<i1+1; j1++)
		{
			if (j1==0)
			printf("%d",i1+1);
			else
			printf("*%d",i1+1);	
		}			
		printf("\n");
	}
	for(int i2=0; i2<n; i2++)
	{
		for(int j2=0; j2<n-i2; j2++)
		{
			if (j2==0)
			printf("%d",n-i2);
			else
			printf("*%d",n-i2);
		}
		printf("\n");
	}
	return 0;
}
