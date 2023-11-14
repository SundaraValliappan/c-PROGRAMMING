/* Vowels in a string*/
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000], rev[1000];
	printf("Enter a string: ");
	scanf("%[^\n]s", s);
	int t = strlen(s);
	printf("The vowels in the string are: \n");
	for(int i=0; i<t; i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')	
			printf("%c ", s[i]);
	}	
	return 0;
}
