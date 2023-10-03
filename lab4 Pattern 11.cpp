#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(int i1=0; i1<n ; i1++)
	{
		for(int s1=0; s1<i1; s1++)
			printf("  ");
		for(int j1=0; j1<n-i1; j1++)
			printf("* ");
		printf("\n");
	}
	for(int i2=0; i2<n ; i2++)
	{
		for(int s2=0; s2<n-i2-1; s2++)
			printf("  ");
		for(int j2=0; j2<i2+1; j2++)
			printf("* ");
		printf("\n");
	}
}
