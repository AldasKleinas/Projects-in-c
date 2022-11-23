#include <stdio.h>

int main()
{
    int integers[3];
    char value = 'a';
    printf("The user will input 3 non negative integer values (a, b, c). The program will output the value Fc (Fc = Fc-1 + Fc-2). F0 = a and F1 = b.\n");
    for(int i=0; i<3; i++)
    {
        printf("Enter the non negative integer value of %c\n", value);
        scanf("%d", &integers[i]);
        printf("Entry successful\n");
        value++;
    }

    int fc;
    if(integers[2] == 0) fc = integers[0];
    if(integers[2] == 1) fc = integers[1];
    for(int i = 1; i < integers[2]-1; i++)
    {
        fc = integers[0] + integers[1];
        integers[0] = integers[1];
        integers[1] = fc;
    }

    printf("Fc = %d", fc);
    return 0;
}