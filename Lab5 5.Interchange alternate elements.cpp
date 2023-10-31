/* Interchange alternate elements */
#include <stdio.h>
int main()
{
	int n;
	printf("Enter even n: ");
	scanf("%d",&n);
	int a[n], temp;
	printf("Enter n numbers: ");
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	for(int j=0; j<n; j=j+2)
	{
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
	}
	printf("Modified Array: ");
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
	return 0;
}
