#include <stdio.h>

void quickSort(int a[], int low, int high)
{
    int i, j, pivot, temp;

    if(low < high)
    {
        pivot = a[high];
        i = low - 1;

        for(j = low; j < high; j++)
        {
            if(a[j] < pivot)
            {
                i++;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        temp = a[i + 1];
        a[i + 1] = a[high];
        a[high] = temp;

        quickSort(a, low, i);
        quickSort(a, i + 2, high);
    }
}

void main()
{
    int a[100], n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    if(n < 1 || n > 100)
        return;

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quickSort(a, 0, n - 1);

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}
