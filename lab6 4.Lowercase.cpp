#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "QWERTYUIOP C";
	for(int i=0; i<strlen(s); i++)
	{
		int c = int(s[i]);
		if(c>64 && c<91) 
			c += 32;
		s[i] = char(c);
	}
	printf("Modified string: %s",s);
	return 0;
}

