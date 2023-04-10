#include <stdio.h>


int largest_contiguous_sum(int arr[], int size)
{
    int sum = 0, max = arr[0];
    
    for (int i = 0 ; i < size ; i++)
    {
        for(int j = i ; j < size ; j++)
        {
            sum += arr[j];
            if(sum > max)
            {
                max = sum;
            }
        }
        
        sum = 0;
    }
    
    return max;
}


// Driver Code
int main()
{
    int a[] = { -2, -3, -4, -1, -2, -1, -5, -3 };
    int n = sizeof(a) / sizeof(a[0]);
 
    // Function Call
    int max_sum = largest_contiguous_sum(a, n);
   printf( "Maximum contiguous sum is %d", max_sum);
    return 0;
}