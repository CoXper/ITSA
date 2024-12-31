#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double t, b, h;
    scanf("%lf %lf %lf", &t, &b, &h);

    double ans = (t + b) * h / 2;
    printf("Trapezoid area:%.1f\n", ans);
}