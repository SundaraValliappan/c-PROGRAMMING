/* frequency of 'the'*/
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	printf("Enter a string: ");
	scanf("%[^\n]s", s);
	strcpy(s, strlwr(s));
	int count, t = strlen(s);
	
	for(int i=0; i<t-2; i++)
	{
		if(s[i]=='t' && s[i+1]=='h' && s[i+2]=='e')	
			count++;
	}	
	
	printf("'The' has repreated %d times",count);
	return 0;
}
