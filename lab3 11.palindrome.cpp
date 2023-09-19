/* palindrome */
#include <stdio.h>
int main()
{
	int n,s=0;
	printf("Enter value for n: ");
	scanf("%d", &n);
	int temp = n;
	while (n>0)
	{
		s= (s*10)+(n%10);
		n=n/10;
	}
	if (s==temp)
	printf("Palindrome");
	else
	printf("Not a Palindrome");
	return 0;
}
