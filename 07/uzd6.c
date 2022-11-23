#include <stdio.h>

int showMenu(char *menuTitle, char *menuOptions[], int menuSize, char *inputMsg);

int main()
{
    char menu_title[20] = "Menu: ";
    char menu_options[3][20] = {"first", "second", "third"};
    char input_message[20] = "Input choice";
    int menu_size = 3;

    showMenu(menu_title, menu_options, menu_size, input_message);
    return 0;
}

int showMenu(char *menuTitle, char *menuOptions[], int menuSize, char *inputMsg)
{
    printf("%s\n", menuTitle);

    int i;
    for(i = 0; i < menuSize; ++i)
    {
        printf("%d %s\n",i+1, menuOptions[i]);
    }

    printf("%s\n", inputMsg);

    int choice;
    char c;
    while(1)
    {
        if(scanf("%d%c", &choice, &c) == 2 && c == '\n' && choice > 0 && choice < menuSize)
        {
            printf("Option chosen\n");
            break;
        }
        else printf("Invalid input\n");
    }

    return choice;
}