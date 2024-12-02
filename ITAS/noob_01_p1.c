#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char name[10000] = {0};
    scanf("%s", name);
    printf("Hello %s\n", name);
}