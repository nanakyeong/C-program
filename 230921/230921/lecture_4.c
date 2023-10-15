#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {

	double x = 0, y = 0, circle = 0, count = 0, pi;
	int i, j, space, square, newPro, pro = 0;

	srand(time(NULL));

	for (i = 0; i < 1000000000; i++) {
		x = (double)rand() / (double)RAND_MAX * 2 - 1;
		y = (double)rand() / (double)RAND_MAX * 2 - 1;

		count++;

		if ((x * x) + (y * y) <= 1) {
			circle++;
		}

		pi = 4 * (circle / (double)count);

		newPro = (count * 100) / 1000000000;

		if (newPro > pro) {

			pro = newPro;

			printf("%d%% 진행.. 원주율: %.7f", pro, pi);

			square = pro / 5;
			for (j = 0; j < square; j++) {
				printf("■");
			}

			space = 20 - square;
			for (j = 0; j < space; j++) {
				printf("□");
			}

			printf("\n");
		}
	}

	double final = 4 * (circle / (double)count);
	printf("원주율 : %.7f", final);

	return 0;


}