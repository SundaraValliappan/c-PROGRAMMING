/*count vowel, consonant, digit, space*/
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	printf("Enter a string: ");
	scanf("%[^\n]s", s);
	int t = strlen(s), c1 =0, c2=0, c3=0, c4=0;
	
	for(int i=0; i<t; i++)
	{
		if(s[i] > 64 && s[i] < 91 || s[i] > 96 && s[i] < 123)
		{
			if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')	
				c1 += 1;
			else
				c2 += 1;
		}
		else if(s[i] > 48 && s[i] < 57)
			c3 += 1;
		else if(s[i] == ' ')
			c4 += 1;	
	}	
	
	printf("Count of vowels: %d\n", c1);
	printf("Count of consonants: %d\n", c2);
	printf("Count of digits: %d\n", c3);
	printf("Count of spaces: %d", c4);
	return 0;
}
