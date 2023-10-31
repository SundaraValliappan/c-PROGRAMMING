/* Ascending Sort */
#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n],k;
	printf("Enter n numbers: ");
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	printf("Enter k: ");
	scanf("%d",&k);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if (a[j] > a[j+1])
			{
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	printf("The '%d'th smallest element: %d\n",k,a[k-1]);
	printf("The '%d'th biggest element: %d",k,a[n-k]);
	return 0;
}
