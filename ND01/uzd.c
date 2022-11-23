//Aldas Kleinas. Pirma pratybu uzduotis. 15 varianto sprendimas.
#include <stdio.h>

int main()
{
    printf("The user inputs an integer value(G). Afterwards the user inputs a sequence of integer values, which ends once G is entered. The program outputs the number of values entered, the number of positive values, the sum of all entered negative values and the product of all entered negative values\n");

    int g, value, sequence_size = 0, positive_values = 0, negative_values = 0, negative_sum = 0, negative_product = 1;
    char c;//variable used to discern whether the users input is an integer value

    while(1)
    {
        printf("Enter the value of G\n");
        if(scanf("%d%c", &g, &c) == 2 && c == '\n') 
        {
            printf("Entry successful\n");
            break;
        }
        else
        {
            printf("Invalid input\n");
            scanf("%*[^\n]");
        }
    }

    while(1)
    {
        printf("Enter an integer value\n");
        if(scanf("%d%c", &value, &c) == 2 && c == '\n')
        {
            if(value == g)
            {
                printf("Sequence over\n");
                break;
            }

            sequence_size++;

            if(value > 0)positive_values++;

            if(value < 0)
            {
                negative_values++;
                negative_sum += value;
                negative_product *= value;
            }

            printf("Entry successful\n");
        }
        else 
        {
            printf("Invalid input\n");
            scanf("%*[^\n]");
        }
    }

    if(negative_product == 1 && sequence_size - positive_values == 0) negative_product = 0;

    if(sequence_size == 0) printf("The sequence has no values");
    else
    {
        printf("The sequence has a total of %d values\n", sequence_size);

        if(positive_values > 0) printf("The sequence has a total of %d positive values\n", positive_values);
        else printf("The sequence has no positive values\n");

        if(negative_values > 0)
        {
            printf("The sum of all negative values in the sequence is %d\n", negative_sum);
            printf("The product of all negative values in the sequence is %d\n", negative_product);
        }
        else printf("The sequence has no negative values\n");
    }
    return 0;
}