#include <stdio.h>
#include <string.h>
int main()
{
	char s1[1000], rev[1000];
	printf("Enter a string: ");
	scanf("%s", s1);
	for(int i=0; s1[i] != '0'; i++)
		rev[strlen(s1)-i-1] = s1[i];
	
	printf("%s", rev);
	return 0;
}
