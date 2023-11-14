/*Dictionary Sort*/
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	printf("Enter a string: ");
	scanf("%[^\n]s", s);
	int a,b,c,t = strlen(s);
	for(int i=0; i<t; i++)
	{
		for(int j=0; j<t-i-1; j++)
		{
			a = s[j]; b= s[j+1];
			if(a>96 && a<123) a -= 33;
			if(b>96 && b<123) b -= 33;
			
			if(a>b)
			{
				c = s[j];
				s[j] = s[j+1];
				s[j+1] = c;
			}
		}
	}	
	
	printf("Modified string: %s", s);
	return 0;
}
