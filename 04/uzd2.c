#include <stdio.h>

int main()
{
    int integers[3];
    char value = 'a';
    printf("User will input 3 integer values (a, b, c). Program will output positive integer values that belong to the interval (a;b] and will have a remnant of 1 when divided by c\n");
    for(int i=0; i<3; i++)
    {
        printf("Enter the integer value of %c\n", value);
        scanf("%d", &integers[i]);
        printf("Entry successful\n");
        value++;
    }

    for(int i = ++integers[0]; i <= integers[1]; i++) 
    {
        if(i > 0 && (i % integers[2] == 1)) printf("%d fits cndition\n", i);
    }
    return 0;
}