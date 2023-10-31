/* Find Duplicate */
#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n],temp,c=0;
	printf("Enter n numbers: ");
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	printf("Duplicate elements: ");
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n-c+1;j++)
		{
			if (a[j]==a[i])
			{
				printf("%d ",a[i]);
				c++;
				temp = a[j];
				a[j] = a[n-1];
				a[n-1] = temp;		
			}
		}
	}
	return 0;
}
