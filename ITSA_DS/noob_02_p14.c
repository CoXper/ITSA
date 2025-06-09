#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float d, diff = 0.238; // meter
    scanf("%f", &d);

    printf("%d\n", (int)(d / diff) + 1);
}