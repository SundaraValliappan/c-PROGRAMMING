#include <stdio.h>
int main()
{
	int n,c;
	printf("Enter no. of rows and starting integer respectively: ");
	scanf("%d%d",&n,&c);
	for(int i1=0; i1<n; i1++)
	{
		for(int j1=0; j1<i1+1; j1++)
			printf("%d ",c);
		c++;
		printf("\n");
	}
	c--;
	for(int i2=0; i2<n; i2++)
	{
		for(int j2=0; j2<n-i2; j2++)
			printf("%d ",c);
		c--;
		printf("\n");
	}
	return 0;
}
