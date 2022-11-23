#include <stdio.h>

int main()
{
    char vardas[5] = {65, 108, 100, 97, 115};
    for(int i=0; i<5; i++)
    {
        printf("%c", vardas[i]);
    }
    return 0;
}