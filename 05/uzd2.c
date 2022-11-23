#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, c, array[1000];
    printf("Input the three positive integer values a, b and c. The program will create an array of c random values that range from a to b. The value of c should not be larger than 1000\n");

    printf("Enter value of a\n");
    scanf("%d", &a);
    printf("Entry successful\nEnter value of b\n");
    scanf("%d", &b);
    printf("Entry successful\nEnter value of c\n");
    scanf("%d", &c);
    if(c < 1000) printf("Entry successful\n");
    else
    {
        printf("Invalid value\n");
        c = 0;
    }

    srand(time(NULL));

    for(int i = 0; i < c; i++)
    {
        while(1)
        {
            array[i] = rand();
            if(array[i] >= a && array[i] <= b) break;
        }
    }

    printf("Array:\n");
    for(int i = 0; i < c; i++) printf("%d\n", array[i]);

    return 0;
}