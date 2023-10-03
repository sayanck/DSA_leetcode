//Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated between 1 to N times which is unknown. Find how many times the array has been rotated. 


#include <stdio.h>

void check_rotation(int arr[], int a, int n)
{

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count++;
        if (arr[i + 1] == a)
        {
            printf("%d no of rotations\n", count);
            return;
        }
    }
}

int main()
{
    int arr[20];
    int arr_1[100];
    // int final_arr[100];
    int n;
    int x;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter an array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr_1[i] = arr[i];
    }

    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr_1[i] > arr_1[j])
            {
                temp = arr_1[i];
                arr_1[i] = arr_1[j];
                arr_1[j] = temp;
            }
        }
    }
    int a = arr_1[0];

    check_rotation(arr, a, n);
}