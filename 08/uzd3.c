#include <stdio.h>

void reverse(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 5, y = 7;
    reverse(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}