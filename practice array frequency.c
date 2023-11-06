#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter n elements: ");
    for(int i=0; i<n; i++) scanf("%d",&a[i]);
    
    int b[n];
    b[0] = a[0];
    int c=0,t;
    for(int i=0; i<n; i++)
    {
        t = 0;
        for(int j=0;j<c;j++)
        {
            if (a[i]==b[j]) t=1;
        }
        if (t==0)
        {
            b[c]=a[i];
            c++;
            int count = 0;
            for(int k=0; k<n; k++)
                if (a[i]==a[k]) count++;
            printf("Element %d has repeated %d times\n",a[i],count);
        }
    }
    return 0;
}