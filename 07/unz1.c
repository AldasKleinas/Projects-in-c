#include <stdio.h>

int isInRange(int number, int low, int high);

int main()
{
    int low = 2, number = 2, high = 3;
    printf("%d", isInRange(number, low, high));
    return 0;
}

int isInRange(int number, int low, int high)
{
    int is_in_range = 0;

    if(low < high) 
    {
        if(number <= high && number >= low) is_in_range = 1;
    }

    return is_in_range;
}