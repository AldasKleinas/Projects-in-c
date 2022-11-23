#include <stdio.h>

int main ()
{
    int num;
    scanf("%d", &num);

    int ar_nelyginis = num % 2;
    char atsakymas[9];

    (ar_nelyginis==1)?
    (atsakymas[0] = 'n', atsakymas[1] = 'e', atsakymas[2] = 'l', atsakymas[3] = 'y', atsakymas[4] = 'g',
    atsakymas[5] = 'i', atsakymas[6] = 'n', atsakymas[7] = 'i', atsakymas[8] = 's', atsakymas[9] = 32):
    (atsakymas[0] = 'l', atsakymas[1] = 'y', atsakymas[2] = 'g', atsakymas[3] = 'i', atsakymas[4] = 'n',
    atsakymas[5] = 'i', atsakymas[6] = 's', atsakymas[7] = 32);

    printf("%s", atsakymas);
    return 0;
}