#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if(x > 31)
            printf("Value of more than 31\n");
        else
            printf("%d\n", (int)pow(2, x));
    }
}