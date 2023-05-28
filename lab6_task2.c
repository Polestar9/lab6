#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Input matrix size: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    int SumMain = 0;
    int SumSide = 0;

    srand(time(NULL));
    
    // Заповнення матриці випадковими числами від -100 до 100
    for (int i = 0; i < n; i++) 
    {
    for (int j = 0; j < n; j++) 
    {
    matrix[i][j] = rand() % 201 - 100;
    }
    }
    printf("Generated matrix:\n");
    for (int i = 0; i < n; i++) 
    {
    for (int j = 0; j < n; j++) 
    {
    printf("%d ", matrix[i][j]);
    }
    printf("\n");
    }
    
    // Обчислення суми елементів головної діагоналі
    for (int i = 0; i < n; i++) 
    {
    SumMain += matrix[i][i];
    }
    // Обчислення суми елементів бокової діагоналі
    for (int i = 0; i < n; i++) 
    {
    SumSide += matrix[i][n - i - 1];
    }
    if (SumMain > SumSide) 
    {
    // Траспонування матриці
    for (int i = 0; i < n; i++) 
    {
    for (int j = i + 1; j < n; j++) 
    {
    int transform = matrix[i][j];
    matrix[i][j] = matrix[j][i];
    matrix[j][i] = transform;
    }
    }
        
    printf("Matrix after transposition:\n");
    for (int i = 0; i < n; i++) 
    {
    for (int j = 0; j < n; j++) 
    {
    printf("%d ", matrix[i][j]);
    }
    printf("\n");
    }
    }
    else 
    {
    printf("Transposition cannot be performed.\n");
    }
    return 0;
}