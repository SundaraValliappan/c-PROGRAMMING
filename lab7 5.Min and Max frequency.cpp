/*Min and Max frequency*/
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	printf("Enter a string: ");
	scanf("%[^\n]s", s);
	int count, t = strlen(s);
	
	for(int i=0; i<t; i++)
		if(s[0]==s[i]) count++;
	int min = count, max = count;
	char c1 = s[0], c2 = s[0];
	
	for(int j =1; j<t; j++)
	{
		count = 0;
		for(int i=0; i<t; i++)
		{
			if (s[j]==s[i])
				count++;
		}
		
		if(count > max)
		{
			c2 = s[j];
			max = count;
		}
		if(count < min)
		{
			c1 = s[j];
			min = count;
		}
	}
	
	printf("The least occured character is %c repeated %d times\n", c1, min);
	printf("The most occured character is %c repeated %d times", c2, max);
	return 0;
}
