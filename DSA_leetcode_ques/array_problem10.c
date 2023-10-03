// Given a matrix, your task is to rotate the matrix 90 degrees clockwise.


#include <stdio.h>

int main()
{

    int n;
    int m;
    int arr[100][100];
    int trans_arr[100][100];

    printf("enter row");
    scanf("%d", &n);

    printf("enter column");
    scanf("%d", &m);

    printf("enter array:: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("array:: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // logic ---- transpose the matrix

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            trans_arr[j][i] = arr[i][j];
        }
    }

    // print the columnin reverse order of transpose matrix

    printf("sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            printf("%d\t", trans_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}