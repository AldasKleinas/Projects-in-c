#include <stdio.h>

void generateArray(int data[], int size, int low, int high);

int main()
{
    int array[8];
    generateArray(array, 6, 2, 12);
    return 0;
}

void generateArray(int data[], int size, int low, int high)
{
    for(int i = 0; i < size; i++)
    {
        data[i] = (rand() % (high - low + 1)) + low;
        printf("%d\n", data[i]);
    }
}