/* SPIRAL PATTERN */
#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n][n], k=1;
	for (int i=0; i<(n+1)/2; i++)
	{
		for(int p=i;p<n-i;p++) a[i][p] = k++;
		for(int q=i+1;q<n-i;q++) a[q][n-i-1] = k++;
		for(int r=n-i-2;r>=i;r--) a[n-i-1][r] = k++;
		for(int s=n-i-2;s>=i+1;s--) a[s][i] = k++;
	}
	for(int x=0; x<n; x++)
	{
		for(int y=0; y<n; y++)
			printf("%d ",a[x][y]);
		printf("\n");
	}
	return 0;
}
