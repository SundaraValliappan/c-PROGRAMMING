/* multiplication tables  */
#include <stdio.h>
int main()
{
	int n;
	printf("Enter value for n: ");
	scanf("%d", &n);
	for (int i=1; i<=10; i++)
	{
		printf("%d times %d is %d \n",i,n,i*n);
	}
	return 0;
}
