#include <stdio.h>

int main()
{
    int n, i, j, k;
    float A[10][10], L[10][10] = {0}, U[10][10] = {0};
    printf("Name: CHIRONTON SHAHA\n");
    printf("ID: 12230320584\n");
    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix A row-wise:\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%f", &A[i][j]);

    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            U[i][j] = A[i][j];
            for(k=0; k<i; k++)
                U[i][j] -= L[i][k]*U[k][j];
        }
        
        for(j=i; j<n; j++)
        {
            if(i==j)
                L[i][i]=1;
            else
            {
                L[j][i] = A[j][i];
                for(k=0; k<i; k++)
                    L[j][i] -= L[j][k]*U[k][i];
                L[j][i] /= U[i][i];
            }
        }
    }

    printf("\nLower Triangular Matrix L:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%f ", L[i][j]);
        printf("\n");
    }

    printf("\nUpper Triangular Matrix U:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%f ", U[i][j]);
        printf("\n");
    }

    return 0;
}