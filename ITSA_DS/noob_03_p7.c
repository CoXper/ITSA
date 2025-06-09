#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, max = -101;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if(x >= max)
            max = x;
    }
    printf("%d\n", max);
}