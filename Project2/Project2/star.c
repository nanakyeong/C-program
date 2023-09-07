#include <stdio.h>

int main() {

	int n;
	scanf_s("%d", &n);
	printf("%d층 피라미드\n", n);

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			printf(" ");

		}
		for (int j = 1; j <= i*2-1; j++)
			printf("*");
	printf("\n");
	}
	
}