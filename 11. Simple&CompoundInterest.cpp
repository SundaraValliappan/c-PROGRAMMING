/* Simple and Compound Interest */
#include <stdio.h>
#include <math.h>
int main()
{
	int p,n;
	float si, ci, amt,r;
	printf("Enter principal amount, no. of years and rate of interest: ");
	scanf("%d %d %f", &p, &n, &r);
	si = (p*n*r)/100;
	amt = p * pow(1 + (float)(r/100),n);
	ci = amt - p;
	printf("The simple interest is %f \n", si);
	printf("The compound interest is %f", ci);
	return 0;
}
