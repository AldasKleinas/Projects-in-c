#include <stdio.h>
#include <stdbool.h>

const int amax = 1000;

bool is_prime_number(int value)//function to determine whether a value is a prime value
{
    bool answer = 0;
    int count = 0, number = value;//number represents every integer number that is lesser than the given value

    while(number > 1)
    {
        if(value % number == 0) count++;
        number--;
    }
    if(count == 1) answer = 1;

    return answer;
}

int main()
{
    printf("The user inputs an array of positive values. The array ends once the user inputs a non-positive value. The program then outputs every unique entered prime value.\n");

    int values_count = 0, array[amax], value;
    
    while(1)//stores entered values
    {
        printf("Enter value\n");
        scanf("%d", &value);
        printf("Entry successful\n");
        if(value <= 0)
        {
            printf("Array over\n");
            break;
        }
        else
        {
            array[values_count] = value;
            values_count++;
        }
    }

    for(int i = 0; i < values_count; i++)//removes non prime values
    {
        if(is_prime_number(array[i]) == 0)
        {
            for(int j = i; j < values_count-1; j++) array[j] = array[j+1];
            values_count--;
            i--;
        }
    }

    for(int i = 0; i < values_count; i++)//removes duplicates
    {
        for(int j = i+1; j < values_count; j++)
        {
            if(array[i] == array[j])
            {
                for(int k = j; k < values_count-1; k++) array[k] = array[k+1];
                values_count--;
                j--;
            }
        }
    }
    
    printf("Prime values:\n");//prints values
    for(int i = 0; i < values_count; i++) printf("%d\n", array[i]);
    
    return 0;
}