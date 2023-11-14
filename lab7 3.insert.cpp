/* insert new character */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char s[1000], c; 
	int n;
	printf("Enter a string: ");
	scanf("%[^\n]s", s);
	printf("Enter new character and index to be inserted respectively: ");
	fflush(stdin);
	scanf("%c %d", &c, &n);
	
	int t = strlen(s);
	for(int i = t; i>=n; i--)
		s[i+1] = s[i];
	s[n] = c;
	
	printf("Modified String: %s", s);
	
	return 0;
}
