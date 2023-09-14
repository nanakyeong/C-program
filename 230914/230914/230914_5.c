#include <stdio.h>

int main() {

	int n;
	printf("정수 입력:");
	scanf_s("%d", &n);

	if (n % 2 == 0)
		printf("짝수입니다.", n);

	else
		printf("홀수입니다.", n);

	return 0;
	



}