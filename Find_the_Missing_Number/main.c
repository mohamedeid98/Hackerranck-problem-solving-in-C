#include <stdio.h>



int get_missing_number(int arr[], int size)
{
    int temp[size + 2] ;
    int missing_num;

    for (int i = 0 ; i < size + 2 ; i++)
        temp[i] = 0;

    for(int i = 0 ; i < size ; i++)
    {
        temp[arr[i]] = 1;
    }

    for (int i = 1 ; i < size + 2 ; i++)
    {
        if(temp[i] == 0)
            missing_num = i;
    }

    return missing_num;
}


/* Driver code */
int main()
{
    int arr[] = { 1, 3, 4, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("the missing number is %d", get_missing_number(arr, n));
}