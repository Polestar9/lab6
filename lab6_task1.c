#include <stdio.h>

int main() 
{
    int n;
    int m;

    printf("Input line count: ");
    scanf("%d", &n);

    printf("Input column count: ");
    scanf("%d", &m);

    int arr[n][m];
    int i, j;
    int sum = 0;

    printf("Input matrix elements:\n");
    for (i = 0; i < n; i++) 
    {
    for (j = 0; j < m; j++) 
    {
    printf("Element A=[%d][%d]: ", i, j);
    scanf("%d", &arr[i][j]);
    }
    }
    
    int MValue[i];
    for (i = 0; i < n; i++) 
    {
    int max = arr[i][0];
    for (j = 1; j < m; j++) 
    {
    if (arr[i][j] > max) 
    {
    max = arr[i][j];
    }
    }
    MValue[i]=max;
    sum += max;
    }
    for (i = 0; i < n; i++) 
    {
    printf("Biggest number in %d line is: %d\n", i, MValue[i]);
    }
    printf("Sum of the biggest numbers: %d", sum);
    return 0;
}