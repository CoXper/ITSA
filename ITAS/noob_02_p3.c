#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        double s;
        scanf("%lf", &s);

        double ans = (int)((s * s * 100 + 5) / 10) / 10.;
        printf("%.1f\n", ans);
    }
}