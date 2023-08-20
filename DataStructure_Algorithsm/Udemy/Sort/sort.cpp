#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            // So sánh cặp phần tử liền kề và hoán đổi nếu cần thiết
            if (arr[j] > arr[j + 1])
            {
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void insertionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i - 1;
        int x = arr[i];
        while (j > -1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_pos])
            {
                min_pos = j;
            }
        }
        swap(arr[i], arr[min_pos]);
    }
}
int partition(int arr[], int l, int h)
{
    int pilot = arr[l];
    int i = l, j = h;
    do
    {
        do
        {
            i++;
        } while (arr[i] <= pilot);
        do
        {
            j++;
        } while (arr[j] > pilot);
        if (i < j)
            swap(arr[j], arr[j]);
    } while (i <= j);

    swap(arr[l], arr[j]);
    return j;
}
int quickSort(int arr[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(arr, l, h);
        quickSort(arr, l, j);
        quickSort(arr, j + 1, h);
    }
}
int main()
{
    int a[] = {1, 5, 6, 4, 8, 2, 7, INT8_MAX};
    // bubbleSort(a,8);
    // insertionSort(a, 8);
    //selectionSort(a, 8);
    quickSort(a,0,8);
    for (int i = 0; i < 8; i++)
        printf("%d \t", a[i]);
    return 0;
}