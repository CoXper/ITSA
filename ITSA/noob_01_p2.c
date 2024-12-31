#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num = 0, arr[4] = {0};
    scanf("%d", &num);
    for(int i = 0; i < 4; i++) {
        arr[i] = num % 10;
        num /= 10;
    }
    for(int i = 3; i >= 0; i--)
        printf("%d\n", arr[i]);
}