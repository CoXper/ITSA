#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int score;
        scanf("%d", &score);

        if(score <= 59)
            printf("不及格\n");
        else if(score <= 69)
            printf("丙等\n");
        else if(score <= 79)
            printf("乙等\n");
        else if(score <= 89)
            printf("甲等\n");
        else
            printf("優等\n");
    }
}