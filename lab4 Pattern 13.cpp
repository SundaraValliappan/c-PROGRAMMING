#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(int i1=0; i1<n; i1++)
	{
		for(int j1=0; j1<i1+1; j1++)
			printf("* ");
		for(int s1=0; s1< 2*n- 2*i1-2; s1++)
			printf("  ");
		for(int k1=0; k1<i1+1; k1++)
			printf("* ");
		printf("\n");
	}
	for(int i2=0; i2<n; i2++)
	{
		for(int j2=0; j2<n-i2; j2++)
			printf("* ");
		for(int s2=0; s2< 2*i2; s2++)
			printf("  ");
		for(int k2=0; k2<n-i2; k2++)
			printf("* ");
		printf("\n");
	}
	
	return 0;
}
