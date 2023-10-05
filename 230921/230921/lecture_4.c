#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i;
    int pro = 0;
    int newPro;
    int squares;
    int space;
    double x = 0;
    double y = 0;
    double circle = 0;
    double pi = 0;
    double final;
    long long count = 0;

    srand(time(NULL));

    for (i = 0; i < 1000000000; i++) {

        x = (double)rand() / (double)RAND_MAX * 2 - 1;
        y = (double)rand() / (double)RAND_MAX * 2 - 1;

        count++;

        if ((x * x) + (y * y) <= 1) {
            circle++;
        }

        pi = (circle / (double)count) * 4;

        newPro = (count * 100) / 1000000000;

        if (newPro > pro) {

            pro = newPro;

            printf("%d%% 진행.. 원주율: %.7f ", pro, pi);

            squares = pro / 5;
            for (int j = 0; j < squares; j++) {
                printf("■");
            }

            space = 20 - squares;
            for (int j = 0; j < space; j++) {
                printf("□");
            }

            printf("\n");
        }
    }

    final = (circle / (double)count) * 4;
    printf("원주율: %.7f\n", final);

    return 0;
}
