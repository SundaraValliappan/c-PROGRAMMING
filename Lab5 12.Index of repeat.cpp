/* index of repeat */
#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n],temp;
	printf("Enter n numbers: ");
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if (a[j]==a[i])
			{
				temp = 1;
				printf("first Element %d has repeated first at index %d",a[j],j);
				break;
			}
		}
		if (temp == 1) break;
	}
	return 0;
}
