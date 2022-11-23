#include <stdio.h>
#include <math.h>

int main()
{
    int integers[3];
    char value = 'a';
    printf("The program will output the amount of solutions the equation ax2+bx+c=0 has and if possible provide it's solutions\n");
    for(int i = 0; i < 3; i++)
    {
        printf("Enter the integer value of %c\n", value);
        scanf("%d", &integers[i]);
        printf("Entry successful\n");
        value++;
    }
    
    double solution1, solution2;
    if((integers[1] * integers[1] - 4 * integers[0] * integers[2])>0)
    {
        solution1 = (-integers[1] + pow((integers[1] * integers[1] - 4 * integers[0] * integers[2]), 2)) / 2 * integers[0];
        solution2 = (-integers[1] - pow((integers[1] * integers[1] - 4 * integers[0] * integers[2]), 2)) / 2 * integers[0];
        printf("Equation has 2 solutions\n");
        printf("solution1 = %f\nsolution2 = %f\n", solution1, solution2);
    }
    else
    {
        if((integers[1] * integers[1] - 4 * integers[0] * integers[2]) == 0) 
        {
            solution1 = -integers[1]/2*integers[0];
            printf("Equation has 1 solution\n");
            printf("solution = %f\n", solution1);
        }
        else printf("Equation has no solutions\n");
    }
    return 0;
}