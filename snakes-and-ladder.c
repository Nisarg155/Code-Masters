#include <stdio.h>
void display(int arr[][10])
{
    for (int i = 9; i >= 0; i--)
    {

        if (i % 2 != 0)
        {
            for (int j = 9; j >= 0; j--)
            {
                int x = arr[i][j];
               printf("  %3d  ", x);
            }
            printf("\n\n");
        }
        else
        {
            for (int j = 0; j < 10; j++)
            {
                int x = arr[i][j];
                printf("  %3d  ", x);
            }
            printf("\n\n");
        }
    }
}

int main()
{
    int arr[10][10], k = 1;
    for (int i = 0; i < 100; i++)
    {
        *(*arr + i) = k++;
    }
    printf("\n\n");
    display(arr);
    printf("\n");

    return 0;
}