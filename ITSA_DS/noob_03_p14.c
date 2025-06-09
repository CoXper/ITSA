#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    for(int i = 1; i < (n-1); i += 2)
        printf("%d ", i);
    if(n % 2 == 0)
        printf("%d\n", n - 1);
    else
        printf("%d\n", n);
}