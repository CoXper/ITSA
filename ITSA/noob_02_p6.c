#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%d\n", (x+y)*(x+y));
    }
}