#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(int i=0; i<n ; i++)
	{
		for(int j=0; j<i+1; j++)
			printf("* ");
		printf("\n");
	}
	for(int k=0; k<n; k++)
	{
		for(int l=0; l<n-k; l++)
			printf("* ");
		printf("\n");
	}
		
}
