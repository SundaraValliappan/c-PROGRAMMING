#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    
    int c=0;
    for(int i=0; i<n; i++)
    {
        c += i+1;
        for(int j=0; j<i+1; j++)
        {
           if(j==0) printf("%d", c-j);
           else printf("*%d", c-j);
        }
        printf("\n");
    }
    return 0;
}
