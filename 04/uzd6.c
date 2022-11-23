#include <stdio.h>
#include <math.h>

int digits_amount(double value)
{
    int value2 = value;
    int digits = 0;

    while(value2 != 0)
    {
        value2 /= 10;
        digits++;
    }

    while(value != (int)value)
    {
        digits++;
        value *= 10;
    }
    return digits;
}

int main()
{
    printf("The user inputs an array of positive values. The array ends once the user enters a non positive value. The program outputs the value which has the most digits\n");

    int max_digits = 0;
    double value, max_value = 0;
    while(1)
    {
        printf("Enter a value\n");
        scanf("%lf", &value);
        if(value <= 0) break;
        printf("Entry successful\n");
        if(digits_amount(value) > max_digits)
        {
            max_value = value;
            max_digits = digits_amount(value);
        } 
    }

    printf("The entered value with the highest amount of digits was %lf", max_value);
    return 0;
}