#include <stdio.h>



void printArray(int arr[], int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void left_rotat(int arr[], int size, int d)
{
    int j, i, temp;
    for (i = 0 ; i < d ; i++)
    {
        temp = arr[0];
        
        for (j = 0 ; j < size - 1 ; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[size - 1] = temp;
    }
}


// Driver code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
 
    // Function calling
    left_rotat(arr, N, d);
    printArray(arr, N);
 
    return 0;
}