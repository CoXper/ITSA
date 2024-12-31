#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int mi;
    scanf("%d", &mi);

    double km = 1.6 * (double)mi;
    printf("km=%.1f\n", km);
}