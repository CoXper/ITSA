#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, list[110] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &list[i]);

    for(int i = n-1; i > 0; i--)
        printf("%d ", list[i]);
    printf("%d\n", list[0]);

	return 0;
}