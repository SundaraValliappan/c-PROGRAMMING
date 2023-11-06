#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int a[n][n], b[n][n];
    printf("FIRST MATRIX: ");
    for(int i=0; i<n; i++)
    {
        printf("Row %d ", i+1);
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
    printf("SECOND MATRIX: ");
    for(int i=0; i<n; i++)
    {
        printf("Row %d ", i+1);
        for(int j=0; j<n; j++)
            scanf("%d",&b[i][j]);
    }
    
    int sum[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            sum[i][j] = a[i][j] + b[i][j];
    
    printf("SUM MATRIX: ");
    for(int i=0; i<n;i++)
    {
        printf("\n");
        for(int j=0; j<n; j++)
            printf("%d ", sum[i][j]);
    }
    return 0;
}
