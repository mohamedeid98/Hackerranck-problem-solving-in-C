#include <stdio.h>

#define bool unsigned char


void exchange(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
 
int partition(int A[], int si, int ei)
{
    int x = A[ei];
    int i = (si - 1);
    int j;
 
    for (j = si; j <= ei - 1; j++) {
        if (A[j] <= x) {
            i++;
            exchange(&A[i], &A[j]);
        }
    }
    exchange(&A[i + 1], &A[ei]);
    return (i + 1);
}
 
/* Implementation of Quick Sort
A[] --> Array to be sorted
si  --> Starting index
ei  --> Ending index
*/
void quickSort(int A[], int si, int ei)
{
    int pi; /* Partitioning index */
    if (si < ei) {
        pi = partition(A, si, ei);
        quickSort(A, si, pi - 1);
        quickSort(A, pi + 1, ei);
    }
}



bool check_pair(int arr[], int size, int num)
{
    int l = 0 , r = size -1;

    quickSort(arr, 0, size - 1);

    while(l < r)
    {
        if(arr[l] + arr[r] == num)
        {
            return 1;
        }
        else if(arr[l] + arr[r] > num)
        {
            r--;
        }
        else if(arr[l] + arr[r] < num)
        {
            l++;
        }
    }
    return 0;
}



/* Driver program to test above function */
int main()
{
    int A[] = { 1, 4, 45, 6, 10, -8 };
    int n = 16;
    int arr_size = 6;
 
    if (check_pair(A, arr_size, n))
        printf("Yes");
    else
        printf("No");
 
    getchar();
    return 0;
}

