#include <stdio.h>
#include <string.h>
int main()
{
	char s1[1000], s2[1000];
	printf("Enter string1 ");
	scanf("%s", s1);
	printf("Enter string2 ");
	scanf("%s", s2);
	
	int t=0;
	for(int i=0; i<strlen(s1); i++)
	{
		if (s1[i] != s2[i])
			t =1;
	}
	if(t==0) printf("EQUAL STRINGS");
	else printf("UNEQUAL STRINGS");
	return 0;
}
