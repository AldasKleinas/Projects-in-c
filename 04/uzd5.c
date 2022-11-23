#include <stdio.h>

int main()
{
    int n;
    printf("The user inputs a positive integer value (n) and afterwords an n amount of positive integer values. The program will output the sum, average, minimum and maximum of these values.\n");
    scanf("%d", &n);

    int array[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter a value\n");
        scanf("%d", &array[i]);
        printf("Entry successful\n");
    }

    int sum = 0;
    for(int i = 0; i < n; i++) sum += array[i];

    double average = (double)sum / (double)n;

    int max_ind = 0, min_ind = 0;
    for(int i = 1; i < n; i++)
    {
        if(array[i] > array[max_ind]) max_ind = i;
        if(array[i] < array[min_ind]) min_ind = i;
    }

    printf("The sum of the entered values is %d\n", sum);
    printf("The average of the entered values is %lf\n", average);
    printf("The maximum of the entered values is %d\n", array[max_ind]);
    printf("The minimum of the entered values is %d\n", array[min_ind]);
    return 0;
}