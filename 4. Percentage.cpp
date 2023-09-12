/* PERCENTAGE OF FIVE SUBJECTS */
#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter the marks out of 100 of all five subjects: ");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	float p;
	p = (a+b+c+d+e)/5;
	printf("The percentage of the student is %f %%", p);
	return 0;
}
