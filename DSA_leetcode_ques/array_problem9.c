// Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.


#include <stdio.h>

int main()
{

    int n;
    int m;
    int arr[100][100];

    printf("enter teh row");
    scanf("%d", &n);

    printf("enter the column");
    scanf("%d", &m);

    printf("enter the array");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("the array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    int store_row[100] = {0};
    int store_col[100] = {0};

    // logic

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                store_row[i] = 1;
                store_col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (store_row[i] == 1 || store_col[j] == 1)
            {
                arr[i][j] = 0;
            }
        }
    }

    printf("enter the sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}