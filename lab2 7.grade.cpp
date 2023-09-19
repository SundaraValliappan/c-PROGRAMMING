/* grade */
#include <stdio.h>
int main()
{
	int a,b,c,d,e,P;
	printf("Enter the marks out of 100 for Maths, Physics, Chemistry, Biology, Computer respectively \n");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	P = (a+b+c+d+e)/5;
	if (P >= 90)
	printf("Your grade is A");
	else if (P>= 80)
	printf("Your grade is B");
	else if (P>= 70)
	printf("Your grade is C");
	else if (P>= 60)
	printf("Your grade is D");
	else if (P>= 40)
	printf("Your grade is E");
	else
	printf("Your grade is F");
	return 0;
}
