#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        float BMI;
        scanf("%f", &BMI);

        if(BMI < 18.5)
            printf("體重過輕\n");
        else if(BMI < 24)
            printf("正常\n");
        else if(BMI < 28)
            printf("體重過重\n");
        else
            printf("肥胖\n");
    }
}