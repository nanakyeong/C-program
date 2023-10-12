#include <stdio.h>

void swap(int* pa, int* pb);

int main(void) {

	int a = 10;
	int b = 20;
	int* pa = &a;
	int* pb = &b;

	printf("swap 전 a의 값: %d\n", a);
	printf("swap 전 b의 값: %d\n", b);

	swap(&a, &b);

}

void swap(int* pa, int* pb) {

	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

	printf("swap 후 a의 값: %d\n", *pa);
	printf("swap 후 b의 값: %d\n", *pb);

}
