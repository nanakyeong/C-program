#include <stdio.h>

void swap(int* pa, int* pb);

int main(void) {

	int a = 10;
	int b = 20;
	int* pa = &a;
	int* pb = &b;

	printf("swap �� a�� ��: %d\n", a);
	printf("swap �� b�� ��: %d\n", b);

	swap(&a, &b);

}

void swap(int* pa, int* pb) {

	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

	printf("swap �� a�� ��: %d\n", *pa);
	printf("swap �� b�� ��: %d\n", *pb);

}
