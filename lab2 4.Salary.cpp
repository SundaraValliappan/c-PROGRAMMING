/* SALARY */
#include <stdio.h>
int main()
{
	int basic, r, hra, da, ta;
	printf("Enter your basic salary: ");
	scanf("%d", &basic);
	printf("Enter 1 for metropolitan city \n2 for tier I \n3 for tier II \n4 for tier III\n");
	scanf("%d",&r);
	switch (r)
	{
		case(1): hra = 0.27 * basic;
				 break;
		case(2): hra = 0.24 * basic;
				 break;
		case(3): hra = 0.16 * basic;
				 break;
		case(4): hra = 0.12 * basic;
				 break;
		default: printf("Enter valid input");
	}
	ta = 0.08 * basic;
	da = 0.44 * basic;
	int gross = hra + ta + da + basic;
	printf("Your gross amount is %d only", gross);
	return 0;
}
