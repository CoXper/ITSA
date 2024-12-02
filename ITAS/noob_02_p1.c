#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double d, h;
    scanf("%lf %lf", &d, &h);

    double ans = d * h / 2;
    printf("Triangle area:%.1f\n", ans);
}