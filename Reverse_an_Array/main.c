#include <stdio.h>


void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}


void reverse_array(int arr[], int start, int end)
{
    while(start < end)
    {
        swap(&arr[start], &arr[end]);
        start++ ; end--;
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
    reverse_array(arr, 0, n-1);
    printf("Reversed array is \n");
    printArray(arr, n);   
    return 0;
}