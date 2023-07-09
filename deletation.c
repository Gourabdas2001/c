#include <stdio.h>

int deletation(int a[], int s, int ind, int t)
{
    if (ind >= t)
    {
        return -1;
        /* code */
    }
    for (int i = ind; i < s; i++)
    {
        a[i] = a[i + 1];
    }

    return 1;
}
void diplay(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main(int argc, char const *argv[])
{
    int size = 10, index = 5;
    int a[100] = {8, 9, 6, 4, 5, 3, 88, 96, 45, 99};
    diplay(a, size);
    printf("\nNew array is====\n");
    deletation(a, size, index, 100);
    size -= 1;
    diplay(a, size);

    return 0;
}
