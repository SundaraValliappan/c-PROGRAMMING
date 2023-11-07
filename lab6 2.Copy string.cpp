#include <stdio.h>
int main()
{
	char s1[6] = "HELLO", s2[1000];
	
	for(int i=0; s1[i] != '0'; i++)
		s2[i] = s1[i];
	
	printf("%s \n", s1);
	printf("COPIED STRING: %s",s2);
	return 0;	
}
