#include <stdio.h>
#include <string.h>
int main()
{
	char s1[6]="HELLO", s2[11]="QWERTYUIOP";
	char s[1000];

	for(int i=0; s1[i] != '0'; i++)
		s[i] = s1[i];
	
	
	for(int i=0; s2[i] != '0'; i++)
		s[strlen(s1)+i] = s2[i];
	
	printf("CONCATED STRING: %s",s);
	return 0;
}
