#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double min;
    scanf("%lf", &min);

    if(min <= 800) {
        printf("%.1lf\n", min * 0.9);
    }
    else if(min < 1500) {
        printf("%.1lf\n", min * 0.9 * 0.9);
    }
    else   
        printf("%.1lf\n", min * 0.9 * 0.79);
}