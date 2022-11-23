#include <stdio.h>
#include <stdlib.h>

void generateValue(int value, int low, int high)
{
    value = (rand() % (high - low + 1)) + low;
}

int createArray(int *size, int *low, int *high)
{
    int *ptr = NULL;
    ptr = (int *)calloc(*size, sizeof(int));

    if(ptr != NULL)
    {
        int i;
        for(i = 0; i < *size; ++i)
        {
            *(ptr + i) = (rand() % (*high - *low + 1)) + *low;
        }
    }

    return ptr;
}

int main()
{
    int size = 6, low = 2, high = 8;
    int *ptr = (int*)createArray(&size, &low, &high);

    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    return 0;
}