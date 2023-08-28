// Use a C program to compute the sum of rows and columns of a matrix [m][n].

#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n;

    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);

    int ** addofarr = (int **)calloc(m, sizeof(int *));
    for(int i = 0; i < m; i++){
        addofarr[i] = (int *)calloc(n, sizeof(int));
        for(int j = 0; j < n; j++){
            addofarr[i][j] = rand() % 10;
        }
    }

    int *countColsum = (int *)calloc(n, sizeof(int)); 
    int *countRowsum = (int *)calloc(m, sizeof(int));
    int sumRow = 0;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            sumRow += addofarr[i][j];
            countColsum[j] += addofarr[i][j];
            printf("%d ", addofarr[i][j]);
        }
        countRowsum[i] = sumRow;
        sumRow = 0;

        printf("\n");
    }

    printf("Row sum: \n");
    for(int i=0; i<m; i++){
        printf("%d\n", countRowsum[i]);
    }

    printf("Col sum: \n");
    for(int i=0; i<n; i++){
        printf("%d ", countColsum[i]);
    }


    return 0;
}