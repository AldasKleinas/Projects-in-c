#include <stdio.h>

int main()
{
    printf("The user inputs two positive integer values s and n. They then input an n amount of positive integer values which are stored in array x. The program outputs all pairs(xi, xj) of values in the array that have a product of s.\n");
    
    int s, n;

    do
    {
        printf("Enter the value of s\n");
        scanf("%d", &s);
        if(s<0) printf("invalid input\n");
    }
    while(s < 0);

    do
    {
        printf("Enter the value of n\n");
        scanf("%d", &n);
        if(n<0) printf("invalid input\n");
    }
    while(n < 0);

    int x[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter positive integer value\n");
        scanf("%d", &x[i]);
        if(x[i] < 0)
        {
            printf("Invalid input\n");
            i--;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n-1; j++)
        {
            if(x[i] * x[j] == s) 
            {
                printf("xi = %d\n", x[i]);
                printf("xj = %d\n\n", x[j]);
            }
        }
    }

    return 0;
}