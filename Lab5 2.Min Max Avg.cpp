/* Min, Max and Avg of Array */
#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	int min, max, s=0;
	printf("Enter n numbers: ");
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	min = a[0]; max =a[0];
	for(int i=0; i<n; i++)
	{
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
		s += a[i];		
	}
	float avg = (float)s/n;
	printf("The minimum and maximum values in the array: %d %d \n",min,max);
	printf("The average of values in the array: %f",avg);	
	return 0;
}
