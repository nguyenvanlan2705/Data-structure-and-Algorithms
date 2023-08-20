#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int A[10];
    int size;
    int length;
} Array;
void Display(Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}
Array *Merge(Array *arr1, Array *arr2)
{
    int i, j, k;
    i = j = k = 0;

    Array *arr3 = (Array *)malloc(sizeof(Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }

    // copy remaining element
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
}
bool isSorted(Array *arr)
{
    for (int i = 0; i < arr->length - 1; i++)
    {
        if (arr->A[i] > arr->A[i + 1])
        {
            return false;
        }
    }
    return true;
}
void insertSorted(Array *arr, int x)
{
    int i = arr->length - 1;
    while (i > 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->length++;
    arr->A[i + 1] = x;
}
int main()
{
    Array arr1 = {{2, 9, 21, 28, 35}, 10, 5};
    Array arr2 = {{2, 3, 16, 18, 28}, 10, 5};
    Array *arr3;
    Array arr4 = {{1, 3, 15, 17, 24}, 10, 5};
    arr3 = Merge(&arr1, &arr2);
    insertSorted(&arr4, 5);
    Display(arr4);
    Display(*arr3);
    printf("\n%d ", isSorted(&arr1));
    return 0;
}