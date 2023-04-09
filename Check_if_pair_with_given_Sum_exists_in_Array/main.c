#include <stdio.h>



int Check_Pair(int arr[], int size, int num)
{
    int count = 0;

    for(int i = 0 ; i < size ; i++)
    {
        for(int j = i + 1 ; j < size ; j++)
        {
            if(arr[i] + arr[j] == num)
                count++;
        }
    }

    return count;
}


int main()
{

    int A[] = { 0, -1, 2, -3, 1 };
    int x = -2;
    int size = sizeof(A) / sizeof(A[0]);
 
    if (Check_Pair(A, size, x)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }



    return 0;
}