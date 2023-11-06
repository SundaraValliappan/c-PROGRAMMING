#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int a[n],sum;
    printf("enter n numbers: ");
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    printf("enter sum: ");
    scanf("%d", &sum);
    
    int b[n][2],c=0;
    printf("THE PAIRS WHICH ADD UP TO THE SUM: ");
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n;j++)
        {
            int t=0;
            if (j!=i)
            {
                for(int k=0; k<n ; k++)
                    if (b[k][0]==a[i] && b[k][1] == a[j]) t=1;
                if(t==0)
                {
                    if(a[i]+a[j]==sum) 
                    {
                        printf("\n%d %d", a[i], a[j]);
                        b[c][0] = a[j]; b[c][1] = a[i];
                        c++;
                    }
                }
            }
        }
    }
    return 0;
}
