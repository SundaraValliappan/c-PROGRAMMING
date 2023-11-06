#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int a[n][n], b[n][n];
    printf("FIRST MATRIX: \n");
    for(int i=0; i<n; i++)
    {
        printf("Row %d ", i+1);
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
    printf("SECOND MATRIX:\n");
    for(int i=0; i<n; i++)
    {
        printf("Row %d ", i+1);
        for(int j=0; j<n; j++)
            scanf("%d",&b[i][j]);
    }
    
    int product[n][n];
    for(int i=0; i<n; i++)
    {
        for(int k=0; k<n; k++)
        {
            int s=0;
            for(int j=0; j<n; j++)
                s+= a[i][j] * b[j][k];
            product[i][k] = s;
        }
    }
    
    printf("\nPRODUCT MATRIX:\n");
    for(int x=0; x<n; x++)
    {
        for(int y=0; y<n; y++)
            printf("%d ", product[x][y]);
        printf("\n");
    }
    return 0;
    
}