#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double t, s;
    scanf("%lf %lf", &t, &s);

    if(t <= 60) {
        printf("%.1lf\n", t * s);
    }
    else if(t <= 120) {
        printf("%.1lf\n", s * 60 + s * (t-60) * 1.33);
    }
    else   
        printf("%.1lf\n", s * 60 + s * 60 * 1.33 + s * (t-120) * 1.66);

}