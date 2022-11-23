#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z;
    scanf("%lf%lf%lf", &x, &y, &z);

    double reiskinys_a, reiskinys_b;

    reiskinys_a = x + 4 * y + pow(z, 3);
    reiskinys_b = (x + sqrt(y)) * (pow(z, 4) - fabs(z) + 46.3);

    printf("reikskinio a) reiksme %.1f\nreiskinio b) reiksme %.1f", reiskinys_a, reiskinys_b);
    return 0;
}