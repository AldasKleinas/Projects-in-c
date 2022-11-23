//Aldas Kleinas. Antra pratybu uzduotis. 4 variantas.
#include <stdio.h>

const int arrayMax = 15;

int main()
{
    printf("The user inputs a non-negative integer value N. They then procede to input an N abount of integer values. The program will output 2 values which will be 2 of the provided N values which were closest to the average all N provided values. Value1 will be lower than the average while value2 will be higher than the average.\n");

    int n;
    char c;
    while(1)
    {
        printf("Enter the value of N.\n");
        if(scanf("%d%c", &n, &c) == 2 && c == '\n' && n >= 0, n <= arrayMax)
        {
            printf("Valid input.\n");
            break;
        }
        else
        {
            printf("Invalid input.\n");
            scanf("%*[^\n]");
        }
    }
    if(c != '\n')scanf("%*[^\n]");

    int i, array[n], sum = 0;
    for(i = 0; i < n; ++i)
    {
        while(1)
        {
            printf("Enter a value.\n");
            if(scanf("%d%c", &array[i], &c) == 2 && c == '\n')
            {
                printf("Valid input.\n");
                sum += array[i];
                break;
            }
            else
            {
                printf("Invalid input.\n");
                scanf("%*[^\n]");
            }
        }
    }

    float average = sum/n;

    int belowAverage = array[0], overAverage = array[0];
    for(i = 0; i < n; i++)
    {
        if(array[i] < average && (array[i] > belowAverage || belowAverage > average)) belowAverage = array[i];
        if(array[i] > average && (array[i] < overAverage || overAverage < average)) overAverage = array[i];
    }

    printf("The value which is closest to the average of inputed values but below it is: %d\n", belowAverage);
    printf("The value which is closest to the average of inputed values but above it is: %d\n", overAverage);

    return 0;
}