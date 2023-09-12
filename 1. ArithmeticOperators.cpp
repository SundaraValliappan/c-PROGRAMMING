/* ARITHMETIC OPERATIONS */
#include <stdio.h>
int main()
{
	int a,b ;
	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);
	int c,d,e,f ;
	c = a+b;
	d = a-b;
	e = a*b;
	f = a/b;
	printf("The sum is %d",c);
	printf("The difference is %d",d);
	printf("The product is %d",e);
	printf("The quotient is %d",f);	
	return 0;	
}
