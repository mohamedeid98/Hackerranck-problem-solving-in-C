#include <stdio.h>


int search_element(int arr[], int size, int element)
{
    int rec;
    
    size--;

    if(size >= 0)
    {
        if(arr[size] == element)
            return size;
        else
            rec = search_element(arr, size, element);
    }
    else
        return -1;
    return rec;
}

int main()
{
    int arr[] = {10, 20, 30, 6};
    int element = 10;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = search_element(arr, size, element);

    if(result != -1)
        printf("Found!");
    else
        printf("Not Found!");

    return 0;
}