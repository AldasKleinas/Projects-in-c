#include <stdio.h>

int main()
{
    printf("The program will make a number of changes to an array of 10 values(A). Some changes will be made based on values entered by the user\n");

    int array[10] = {0};//a)

    printf("Array values are:\n");//b)
    for(int i = 0; i < 10; i++) printf("%d ", array[i]);
    printf("\n");

    array[0] = 1;//c)
    array[3] = 2;
    array[9] = 3;

    for(int i = 2; i < 9; i++) array[i] = array[i+1];//d)

    for(int i = 10; i > 6; i--) array[i] = array[i-1];//e)
    array[6] = 4;

    printf("Array values are:\n");//f)
    for(int i = 0; i < 10; i++) printf("%d ", array[i]);
    printf("\n");

    int x, y;//g)
    printf("Enter the values x and y. The program will put value y into A at the index x. X and y should be integer values and x should be more or equal to 0 and less or equal to 9\n");
    scanf("%d%d", &x, &y);
    if(x >= 0 && x <=9) 
    {
        printf("Entry successful\n");
        array[x] = y;
    }
    else printf("Invalid input\n");
    
    //h)
    printf("Input an interger value x. The value should be from 0 to 9. The program will remove a value that has the index of x from A.\n");
    scanf("%d", &x);
    if(x >= 0 && x <=9) 
    {
        printf("Entry successful\n");
        for(int i = x; i < 9; i++) array[i] = array[i+1];
    }
    else printf("Invalid input\n");

    //i)
    printf("Input the values of x and y. The program will insert the value of y into A at the index of x. x should be an integer value that is larger of equal to 1 and less of equal to 10\n");
    scanf("%d%d", &x, &y);
     if(x >= 0 && x <=9) 
    {
        printf("Entry successful\n");
        for(int i = 10; i > x-1; i--) array[i] = array[i-1];
        array[x-1] = y;
    }
    else printf("Invalid input\n");

    printf("Array values are:\n");//j)
    for(int i = 0; i < 10; i++) printf("%d ", array[i]);
    printf("\n");
    return 0;
}