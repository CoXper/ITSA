#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d+%d=%d\n", x, y, x+y);
    printf("%d*%d=%d\n", x, y, x*y);
    printf("%d-%d=%d\n", x, y, x-y);
    if(x >= 0)
        printf("%d/%d=%d...%d\n", x, y, x/y, x%y);
    else
        printf("%d/%d=%d...%d\n", x, y, x/y - 1, -x%y);
}