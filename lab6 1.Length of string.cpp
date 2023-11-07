/*length of string */
#include <stdio.h>
int main()
{
	char s[1000];
	printf("Enter a string: ");
	
	scanf("%s", s);
	
	int c=0;
	for(int i=0; i<1000; i++)
		 if(s[i] == '\0')
		 	break;
		else
			c++;
		 
	printf("Length: %d",c);
	return 0;
}
