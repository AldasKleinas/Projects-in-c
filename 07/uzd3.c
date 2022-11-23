#include <stdio.h>

int getPositiveNumber(char *msg);

int main()
{
    printf("%d", getPositiveNumber("Input value"));
    return 0;
}

int getPositiveNumber(char *msg)
{
    printf("%s\n", msg);

    int value;
    char c;
    while(1)
    {
        if(scanf("%d%c", &value, &c) == 2 && c == '\n')
        {
            printf("Valid input\n");
            break;
        }
        if(c != '\n') scanf("%*[^\n]");
    }
    return value;
}