/* no of years */
#include <stdio.h>
int main()
{
	int days;
	float yrs;
	printf("Enter the no. of days: ");
	scanf("%d", &days);
	yrs = (float)days/365;
	printf("The no. of years is %f",yrs);
	return 0 ;
}
