#include <stdio.h>

int isPrime(int num) {
	for (int div = num - 1; div > 1; div--) {
		if (num % div == 0)
			printf("해당 수는 소수가 아닙니다.");
	}
	printf("해당 수는 소수입니다.");
}

int main() {
	int num;

	printf("소수인지 확인할 수를 입력하세요: ") ;
	scanf_s("%d", &num);

	printf("%d\n", isPrime(num));

	return 0;
}