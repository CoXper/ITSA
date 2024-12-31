#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    printf("NT10=%d\n", n / 10);
    printf("NT5=%d\n", (n%10) / 5);
    printf("NT1=%d\n", (n%5));
}