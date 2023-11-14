/*Capitalise first letter*/
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000], rev[1000];
	printf("Enter a string: ");
	scanf("%[^\n]s", s);
	
	int t = strlen(s);
	s[0] = s[0]-32;
	for(int i=0; i<t; i++)
	{
		if(s[i] == ' ')
			s[i+1] = s[i+1] - 32;
	}	
	
	printf("Modified string: %s", s);
	return 0;
}
