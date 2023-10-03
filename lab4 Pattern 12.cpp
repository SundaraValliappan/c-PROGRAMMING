#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(int i1=0; i1<n ; i1++)
	{
		for(int j1=0; j1<n-i1; j1++)
			printf("* ");
		printf("\n");
	}
	for(int i2=0; i2<n ; i2++)
	{
		for(int j2=0; j2<i2+1; j2++)
			printf("* ");
		printf("\n");
	}
}
