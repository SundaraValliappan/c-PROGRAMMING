/* Delete Duplicate */
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
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if (a[i]==a[j])
			{
				temp = a[n-1];
				a[n-1] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("MODIFIED ARRAY: ");
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
	return 0;
}
