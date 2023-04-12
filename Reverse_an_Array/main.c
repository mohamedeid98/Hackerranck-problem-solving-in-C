#include <stdio.h>


void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}


void reverse_array(int arr[], int size)
{
    int end = size - 1 ;
    for (int i = 0 ; i < end ; i++, end--)
    {
        swap(&arr[i], &arr[end]);
    }

}

void printArray(int arr[], int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

/* Driver function to test above functions */
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    reverse_array(arr, n);
    printf("Reversed array is \n");
    printArray(arr, n);   
    return 0;
}