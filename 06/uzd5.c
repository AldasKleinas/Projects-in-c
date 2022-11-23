#include <stdio.h>

const int str_max = 20;
int main()
{
    printf("The user inputs an email adress. If valid, the adress domain will be printed and the entire adress will be stored in \"emails.txt\".\n");

    char name[str_max], c, email[str_max], type[str_max];

    while(1)
    {
        if(scanf("%19[^@\n]%c%19[^.\n]%c%19[^\n]%c", &name, &c, &email, &c, &type, &c) == 6 && c =='\n')
        {
            printf("Valid input.\n");
            //printf("%s\n%s\n%s\n", name, email, type);
            break;
        }
        else printf("Invalid input. Email adress must follow the format _@_._ where \"_\" represents any amount of character that is more than 0.\n");
    }
    printf("The domain of the entered email adres is: %s.%s", email, type);

    FILE *my_file = fopen("emails.txt", "a");
    fprintf(my_file, "%s@%s.%s\n", name, email, type);
    fclose(my_file);

    return 0;
}