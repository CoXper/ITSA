#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float h, w;
    scanf("%f %f", &w, &h);
    float h_m = h / 100;

    printf("%.2f\n", w / h_m / h_m);
}