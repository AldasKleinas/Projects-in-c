#include <stdio.h>

int main()
{
    int integers[3];
    char value = 'a';
    printf("The user will input 3 positive integer values (a, b, c). The program will output 2 values - the greatest common divisor and the least common multiple of the 3 given values\n");
    for(int i = 0; i < 3; i++)
    {
        printf("Enter the integer value of %c\n", value);
        scanf("%d", &integers[i]);
        printf("Entry successful\n");
        value++;
    }

    int did_r;
    if(integers[0] >= integers[1] && integers[0] >= integers[2]) did_r = integers[0];
    else
    {
        if(integers[1] >= integers[0] && integers[1] >= integers[2]) did_r = integers[1];
        else did_r = integers[2];
    }

    int gcd;
    for(int i = 1; i<=did_r; i++)
    {
        if(integers[0] % i == 0 && integers[1] % i == 0 && integers[2] % i == 0) gcd = i;
    }

    int lcm, x = did_r;
    while(1)
    {
        if(x % integers[0] == 0 && x % integers[1] == 0 && x % integers[2] == 0)
        {
            lcm = x;
            break;
        }
        x++;
    }

    printf("The greatest common divisor or a, b, and c is %d\n", gcd);
    printf("The least common multiple of a, b, and c is %d", lcm);
    return 0;
}