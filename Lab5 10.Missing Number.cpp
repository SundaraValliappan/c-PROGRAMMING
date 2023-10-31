/* missing number */
#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n],c,temp;
	printf("Enter first (n+1) integers with one missing number: ");
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	for(int I=0;I<n+1;I++)
	{
		c=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]==I)
			c++;
		}
		if (c==0)
		temp = I;
	}
	printf("The missing number is %d",temp);
	return 0;
}
