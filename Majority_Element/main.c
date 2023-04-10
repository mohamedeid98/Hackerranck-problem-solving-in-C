#include <stdio.h>


void find_majority(int arr[], int size)
{
    int max = 0 , count = 1, index = -1;

    for(int i = 0 ; i < size ; i++)
    {
        int count = 1;
        for (int j = i+1 ; j < size ; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > max)
        {
            max = count;
            index = i;
        }
        
    }

    if (max > size / 2)
        printf("%d", arr[index]);
  
    else
        printf("No Majority Element\n");
}


// Driver code
int main()
{
    int arr[] = { 1, 1, 2, 1, 3, 5, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    // Function calling
    find_majority(arr, n);
  
    return 0;
}