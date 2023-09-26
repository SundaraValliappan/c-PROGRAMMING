/* Electricity Bill */
#include <stdio.h>
int main()
{
	float unit, bill;
	printf("Enter the number of units: ");
	scanf("%f",&unit);
	if (unit<100)
		bill = unit * 0.5;
	else if (unit>=100 && unit<200)
		bill = unit * 1.5;
	else if (unit>= 200 && unit<350)
		bill = unit * 2.5;
	else if (unit >= 350 && unit<500)
		bill = unit * 3.5;
	else if (unit >= 500)
		bill = unit * 5;
	else
		printf("Enter Valid Unit");
	printf("Your Bill amount is %f", bill);
	return 0;
}
