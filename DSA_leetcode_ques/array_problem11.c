// enter elements of matrix in spiral manner


#include <stdio.h>

int main()
{

    int n;
    int m;
    int arr[100][100];

    printf("enter the row");
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

    printf("array:  \n ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // logic

    printf("\n spiral elements \n\n");

    int top = 0;
    int bottom = (n - 1);
    int left = 0;
    int right = (m - 1);

    while (top <= bottom && left <= right)
    {

        for (int i = top; i <= right; i++)
        {
            printf("%d  ", arr[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            printf("%d  ", arr[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
    }
}
