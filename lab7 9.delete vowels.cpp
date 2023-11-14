/* delete vowels*/
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	printf("Enter a string: ");
	scanf("%[^\n]s", s);
	int t = strlen(s);

	for(int i=0; i<t; i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
		{
			
			for(int j=i; j<t-1; j++)
				s[j] = s[j+1];
			s[t-1] = '\0';
			t--;
		}
	}	
	
	printf("Modified String: %s",s);
	return 0;
}
