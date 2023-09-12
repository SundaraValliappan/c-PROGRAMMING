/* Metric Conversion */
#include <stdio.h>
int main()
{
	float a;
	int x,y,z;
	printf("Enter the distance in kilometers: ");
	scanf("%f",&a);
	x = a*1000;
	y = x * 100;
	z = x * 1000;
	printf("The distance in metres is %d \n", x);
	printf("The distance in centimeters is %d \n", y);
	printf("The distance in millimeters is %d", z);
	return 0;
}
