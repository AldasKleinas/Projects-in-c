#include <stdio.h>

int main()
{
    printf("Input a date in the format YYYY-MM-DD. The program will output what day of the week the given date was. The names of the dates will be taken from \"week.txt\" which must have 7 lines with coresponding names of days of the week\n");

    int year, month, day;
    char c1, c2, c3;

    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //Input and validation
    while(1)
    {
        printf("Input date in provided format.\n");
        if(scanf("%d%c%d%c%d%c", &year, &c1, &month, &c2, &day, &c3) == 6 && c1 == '-' && c2 == '-' && c3 == '\n')
        {
            if(year > 9999 || year < 1000) printf("Invalid input. Year must consist of 4 digits.\n");
            else
            {
                if(month < 1 || month > 12) printf("Invalid input. Month must belong to the interval [1;12]\n");
                else
                {
                    //Most countries switched from the julian calendar to the gregorian calendar during the 18th century. For the purposes of this program I used the date during which the UK transitioned.
                    if((year < 1752 && year % 4 == 0) || (year >= 1752 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))) month_days[1]++;
                    if(year == 1752 && month == 9 && (day > 1 || day < 14))
                    {
                        printf("Invalid input. Day did not exist because of switch from the julian calendar to the gregorian calendar.\n");
                        continue;
                    }
                    if(day < 1 || day > month_days[month-1]) printf("Invalid imput. Day must belong to the day intervals of tneir respective months\n");
                    else
                    {
                        printf("Valid input.\n");
                        break;
                    }
                }
            }
        }
        else printf("Invalid input. Format not followed.\n");
        if(c3 != '\n') scanf("%*[^\n]");
    }

    int year_code = (year % 100 + (year % 100 / 4)) % 7;

    int month_code[12] = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};

    int century_codes[7] = {4, 2, 0, 6, 4, 2, 0};
    int century_code;
    if(year > 1752 || (year == 1752 && month == 9 && day >= 14) || year == 1752 && month > 9) century_code = century_codes[(year / 100 - 17) % 7];
    else century_code = (18 - year / 100) % 7;

    int leapyear_code = 0;
    if(month == 1 && month_days[1] == 29 || month == 2 && month_days[1] == 29) leapyear_code = -1;

    int day_code = (year_code + month_code[month-1] + century_code + leapyear_code + day) % 7;

    char names[7][20];
    FILE *my_file = fopen("week.txt", "r");
    for(int i = 0; i < 7; i++) fscanf(my_file, "%s", &names[i]);
    fclose(my_file);

    printf("The day of the week during the provided date was:\n");
    printf("%s\n", names[day_code]);
    return 0;
}