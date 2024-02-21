#include <stdio.h>
#define SIZE 5

void sort_even_odd(int len, int a[])
{
    int odd = 0;
    int even = 0;
    int i;

    for (i = 0; i < len; i++)
    {
        if (a[i] % 2 == 0)
            a[odd++] = a[i];
        a[even++] = a[i];
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

    sort_even_odd(SIZE, arr);
    Print(SIZE, arr);

    return 0;
}
