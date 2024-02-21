#include <stdio.h>
#define SIZE 20
void sort_array(int size, int a[])
{
    int tmp = 0;
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void Print(int len, int a[])
{
    for (int i = 0; i < len; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int arr[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    sort_array(SIZE, arr);
    Print(SIZE, arr);

    return 0;
}
