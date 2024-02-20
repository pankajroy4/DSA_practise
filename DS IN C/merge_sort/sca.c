#include <stdio.h>
void merge_sort(int[], int, int);
void merge(int[], int, int);

int main()
{
    int arr[10] = {20, 44, 56, 33, 11, 67, 89, 45, 34, 32};
    int i;
    printf("\nBefore sorting Array is:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nAfter  sorting Array is:\n");
    merge_sort(arr, 0, 9);
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}
void merge_sort(int arr[], int first, int last)
{
    int mid;
    if (first < last)
    {
        mid = (first + last) / 2;
        merge_sort(arr, first, mid);
        merge_sort(arr, mid + 1, last);
        merge(arr, first, last);
    }
}

void merge(int arr[], int first, int last)
{
    int i, i1, i2, i3, mid;
    int temp[20];
    mid = (first + last) / 2;
    i1 = 0;
    i2 = first;
    i3 = mid + 1;
    while (i2 <= mid && i3 <= last)
    {
        if (arr[i1] < arr[i3])
        {
            temp[i1] = arr[i2];
            i2 = i2 + 1;
        }
        else
        {
            temp[i1] = arr[i3];
            i3 = i3 + 1;
        }
        i1 = i1 + 1;
    }

    if (i2 <= mid)
    {
        while (i2 <= mid)
        {
            temp[i1] = arr[i2];
            i2++;
            i1++;
        }
    }
    else
    {
        while (i3 <= last)
        {
            temp[i1] = arr[i3];
            i1++;
            i3++;
        }
    }
    i = 0;
    while (i < i1)
    {
        arr[first + i] = temp[i];
        i = i + 1;
    }
}
