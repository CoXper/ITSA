#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            printf("NO\n");
            break;
        }
        else if(i == n-1)
            printf("YES\n");
    }
}