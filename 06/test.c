#include <stdio.h>

int main()
{
    FILE *my_file = fopen("text.txt", "r");

    char string[60];

    fgets(string, 60, my_file);

    printf("%s", string);
    
    return 0;
}