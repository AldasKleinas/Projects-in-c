#include <stdio.h>
#include <string.h>

const int string_max = 50;

int main()
{
    printf("Input three values that are seperated from eachother only by a semicolon. The program will detemnine which value is is neither the greatest nor the lowest. The determined value will be printed in a text file that you will provide the name of.\n");

    float value1, value2, value3;
    char c1, c2, c3;

    while(1)
    {
        printf("Input three values\n");
        if(scanf("%f%c%f%c%f%c", &value1, &c1, &value2, &c2, &value3, &c3) == 6 && c1 == ';' && c2 == ';' && c3 == '\n')
        {
            printf("Valid input\n");
            break;
        }
        else 
        {
            printf("Invalid input. Provided format not followed.\n");
            if(c3 != '\n') scanf("%*[^\n]");
        }
    }

    if(value1 == value2 || value1 == value3 || value2 == value3) printf("Some values are equal therefore an answer can not be provided\n");
    else
    {
        float mid_value = value1;
        if((value1 > value2 && value3 < value2) || (value3 > value2 && value1 < value2)) mid_value = value2;
        if((value1 > value3 && value2 < value3) || (value2 > value3 && value1 < value3)) mid_value = value2;

        //printf("The value which is neither the greatest nor the lowest is %f\n", mid_value);

        char file_name[string_max];
        int string_size;
        while(1)
        {
            printf("Enter the name of the text file in which the result will be stored\n");
            scanf("%49s", &file_name);
            string_size = strlen(file_name);
            if(string_size > 3 && file_name[string_size-1] == 't' && file_name[string_size-2] == 'x' && file_name[string_size-3] == 't' && file_name[string_size-4] == '.')
            {
                printf("Valid file name provided\n");
                break;
            }
            else printf("File name must end with \".txt\"\n");
        }

        printf("Entering value in file\n");
        FILE *my_file = fopen(file_name, "w");
        fprintf(my_file, "%f", mid_value);
        fclose(my_file);
    }

    
    return 0;
}