/*words in a string*/
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000], rev[1000];
	printf("Enter a string: ");
	scanf("%[^\n]s", s);
	int count=0 , t = strlen(s);
	if(s[0]==' ') 
		count --;
	for(int i=0; i<t; i++)
	{
		if(s[i]== ' ')	
		{
			count ++;
			for(int j=i+1; s[j] == ' '; j++)
				i++;
		}
	}	
	
	printf("No. of words: %d",count+1);
	return 0;
}
