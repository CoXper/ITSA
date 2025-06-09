#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char num[5];
    scanf("%s", num);

    for(int i = 0; i < 5; i++) {
        int out = num[i] - '0';
        for(int j = 0; j < out; j++)
            printf("*");
        printf("\n");
    }
}