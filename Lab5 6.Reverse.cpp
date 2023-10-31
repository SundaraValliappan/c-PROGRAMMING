/* Reverse */
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
	for(int j=0; j<(n+1)/2; j++)
	{
		temp =a[j];
		a[j]=a[n-j-1];
		a[n-j-1]=temp;
	}
	printf("Reversed array: ");
	for(int i=0; i<n; i++)
		printf("%d ", a[i]);
	return 0;
}
