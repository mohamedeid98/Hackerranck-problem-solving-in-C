#include <stdio.h>


int find_oddOccur(int arr[], int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        int count = 0;
        for (int j = 0 ; j < size ; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count % 2 != 0)
            return arr[i];
    }
    
    return -1;
}


// driver code
int main()
    {
        int arr[] = { 2, 3, 5, 4, 5, 2,
                      4, 3, 5, 2, 4, 4, 2 };
        int n = sizeof(arr) / sizeof(arr[0]);
 
        // Function calling
        printf("%d", find_oddOccur(arr, n));
 
        return 0;
    }