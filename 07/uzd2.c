#include <stdio.h>

 int getFactorial(int number);

 int main()
 {
    int number = -4;
    printf("%d", getFactorial(number));
    return 0;
 }

 int getFactorial(int number)
 {
    int factorial = 0;

    if(number > 0)
    {
        if(factorial == 0) factorial++;
        while(number > 0)
        {
            factorial *= number;
            number--;
        }
    }

    return factorial;
 }