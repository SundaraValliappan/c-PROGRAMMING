/* Leap Year */
#include <stdio.h>
int main()
{
	int yr;
	printf("Enter the year: ");
	scanf("%d",&yr);
	if ((yr % 4 == 0) && ((yr % 100 != 0) || (yr % 400 == 0)))
	printf("It is a LEAP Year");
	else
	printf("It is NOT a LEAP Year");
	return 0;
}
