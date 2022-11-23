#include <stdio.h>

int main()
{
    printf("The user inputs a positive integer value. The program will output the factorial of the value and store it in \"out.txt.\"\n");

    int num = 1;
    char c;

    while(1)
    {
        printf("Enter a positive integer value\n");
        if(scanf("%d%c", &num, &c) == 2 && num > 0 && c == '\n')
        {
            printf("Entry successful\n");
            break;
        }
        else 
        {
            if(num <= 0) printf("value must be positive.\n");
            else printf("Input mut be an integer value with no symbols\n");
            if(c != '\n') scanf("%*[^\n]");
        }
    }

    int factorial = 1;
    while(num != 1)
    {
        factorial *= num;
        num--;
    }

    printf("The factoreal of the given value is %d\n", factorial);

    FILE *my_file = fopen("out.txt", "w");
    fprintf(my_file, "%d", factorial);
    fclose(my_file);

    return 0;
}