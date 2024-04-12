#include <stdio.h>
#include <math.h>

int main() {
    double r, m;
    int res;
    scanf("%lf", &r);
    m = 4 * M_PI * pow(r,3)*21500/3;
    res = round(m);
    printf("%d", res);

    return 0;
}
