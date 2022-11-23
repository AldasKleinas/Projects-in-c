#include <stdio.h>

int main()
{
    int x, y, z, minr, maxr;
    scanf("%d%d%d", &x, &y, &z);
    
    (x <= y)?((x <= z)?(minr = x):(minr = z)):((y <= z)?(minr = y):(minr = z));
    (x >= y)?((x >= z)?(maxr = x):(maxr = z)):((y >= z)?(maxr = y):(maxr = z));

    printf("Minimali reiksme yra %d\nMaksimali reiksme yra %d", minr, maxr);
    return 0;
}