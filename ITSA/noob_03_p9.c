#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int m;
    scanf("%d", &m);

    if(m >= 3 && m <= 5)
        printf("Spring\n");
    else if(m >= 6 && m <= 8)
        printf("Summer\n");
    else if(m >= 9 && m <= 11)
        printf("Autumn\n");
    else
        printf("Winter\n");
}