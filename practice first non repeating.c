#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    
    for(int i=0; i<n; i++)
    {
        int t =0;
        for(int j=i+1;j<n;j++)
            if(a[i]== a[j]) t=1;
        if (t==0)
        {
            printf("First non repeating element: %d", a[i]);
            break;
        }
    }
    return 0;
}