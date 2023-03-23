#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b)
{
    return strcmp(a, b);
}
int lexicographic_sort_reverse(const char* a, const char* b)
{
    return strcmp(b, a);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b)
{
    int flag=0;
    int i, dist_a=0, dist_b=0;
    int char_count_a[26]={0}, char_count_b[26]={0};
    for (i = 0 ; a[i] != '\0' ; i++)
    {
        if(char_count_a[a[i] - 'a'] == 0)
        {
            char_count_a[a[i] - 'a'] = 1;
            dist_a++;
        }
    }
    for (i = 0 ; b[i] != '\0' ; i++)
    {
        if(char_count_b[b[i] - 'a'] == 0)
        {
            char_count_b[b[i] - 'a'] = 1;
            dist_b++;
        }
    }
    if(dist_a == dist_b)
        flag =lexicographic_sort(a, b);
    else if(dist_a > dist_b)
        flag = 1;
    return flag;
}
int sort_by_length(const char* a, const char* b)
{
    int i = 0, len_a=0, len_b=0, flag=0;
    while(a[i] != '\0')
    {
        if(a[i] != '\0')
            len_a++;

        i++;
    }
    i = 0;
    while(b[i] != '\0')
    {
        if(b[i] != '\0')
            len_b++;

        i++;
    }
    if(len_a == len_b)
        flag = lexicographic_sort(a, b);
    else if((len_a > len_b))
        flag = 1;
    return flag;

}
void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b))
{
    int i, j;
    for(i = 0 ; i <= len - 2 ; i++)
    {
        for(j = 0 ; j <= len-2-i ; j++)
        {
            if(cmp_func(arr[j], arr[j+1]) > 0)
            {
                char *temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    char** arr;
	arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}
