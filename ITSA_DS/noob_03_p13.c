#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    printf("百元 %d\n", n / 100);
    printf("十元 %d\n", (n%100) / 10);
    printf("壹元 %d\n", n % 10);
}