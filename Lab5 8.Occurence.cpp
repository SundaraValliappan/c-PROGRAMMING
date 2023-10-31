/* Occurence */
#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n],q,c;
	printf("Enter n numbers: ");
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	printf("Enter element: ");
	scanf("%d",&q);
	for(int i=0;i<n; i++)
	{
		if (a[i]==q)
		c++;
	}
	printf("Element %d has occured %d times",q,c);
	return 0;
}
