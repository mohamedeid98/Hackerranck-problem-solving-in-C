#include <stdio.h>



int get_missing_number(int arr[], int size)
{
    int N = size + 1 ;
    int total = N * (N + 1) / 2 ;
    
    for (int i = 0 ; i < size ; i++)
    {
        total -= arr[i];
    }

    return total;
}


/* Driver code */
int main()
{
    int arr[] = { 1, 3, 4, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("the missing number is %d", get_missing_number(arr, n));
}