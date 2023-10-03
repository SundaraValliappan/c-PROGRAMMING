#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if (j==n-1)
			printf("%d",i+2);
			else
			printf("%d",i+1);	
		}			
		printf("\n");
	}
	
	return 0;
}
