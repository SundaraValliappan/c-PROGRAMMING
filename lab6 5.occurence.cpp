#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ !@#$%^&*() abcdefghijklmnopqrstuvwxyz";
	char c;
	printf("Enter character: ");
	scanf("%c",&c);
	for(int i=0; i<strlen(s); i++)
	{
		if(s[i]==c) 
			printf("%c is found at index %d",c,i);
	}
	return 0;
}

