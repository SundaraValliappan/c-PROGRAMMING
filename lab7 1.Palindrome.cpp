/* Palindrome String */
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000], rev[1000];
	printf("Enter a string: ");
	scanf("%[^\n]s", s);
	int t = strlen(s);
	for(int i=0; i<t; i++)
		rev[t-i-1] = s[i];
	int temp = 1;
	for(int j=0; j<t; j++)
	{
		if(s[j] != rev[j])
		{
			temp = 0;
			break;
		}
	}
	if (temp == 1) printf("PALINDROME");
	else printf("NOT A PALINDROME");
	return 0;
}
