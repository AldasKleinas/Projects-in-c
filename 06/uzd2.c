#include <stdio.h>
#include <math.h>

void invalid_data(FILE *my_file, char file_name[])
{
    while(1)
    {
        printf("Input the name of a file that has valid data\n");
        scanf("%s", file_name);
        my_file = fopen(file_name, "r");
        if(my_file == NULL) printf("Error in opening file\n");
        else 
        {
            printf("Existing file provided\n");
            break;
        }
    }
}

int main()
{
    printf("The user inputs a value that is greater or equal to 10 and no greater than 1000 as well as with no more than 3 digits past the comma in \"in.txt\". The program will output the amount of digits in the value has. If the provided value is invalid then the program will ask to input the name of a file with valid data\n");

    char file_name[50] = "in.txt";
    float num;
    FILE *my_file = fopen(file_name, "r");

    //printf("%d\n", fscanf(my_file, "%f", &num));
    //printf("%d\n", feof(my_file));
    while(1)
    {
        if(fscanf(my_file, "%f", &num) == 1 && feof(my_file))
        {
            if(num > 10 || num < 1000)
            {
                printf("Valid input\n");
                break;
            }
            else
            {
                printf("Number outside of designated value range\n");
            }
        }
        else 
        {
            //printf("%f", num);
            printf("Input must not contain letters or symbols\n");
            while(1)
            {
                printf("Input the name of a file that has valid data\n");

                fclose(my_file);
                scanf("%s", &file_name);
                FILE *my_file = fopen(file_name, "r");

                fscanf(my_file, "%f", num);
                printf("%f", num);

                if(my_file == NULL) printf("Error in opening file\n");
                else 
                {
                    printf("Existing file provided\n");
                    break;
                }
                break;
            }
        }
    }
    
    fclose(my_file);

    return 0;
}