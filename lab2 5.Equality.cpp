/* three equal numbers */
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	if (a == b && a==c)
		printf("Equal");
	else
		printf("Not Equal");
	
	return 0;
}
