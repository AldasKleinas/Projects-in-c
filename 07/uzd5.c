#include <stdio.h>

long getFileSize(char *fileName);

int main()
{
    printf("%d", getFileSize("bybis.txt"));
    return 0;
}

long getFileSize(char *fileName)
{
    FILE *my_file = fopen(fileName, "rb");
    if(my_file == NULL) return -1;

    fseek(my_file, 0, SEEK_END);

    return ftell(my_file);
}