#include <stdio.h>

int fact(int num) {
	int result = 0;

	if (num == 0) return 1;
	
	return num * fact(num - 1);

}

int main() {

	int num;
	printf("����� ���丮�� �� �Է� :");
	scanf_s("%d", &num);

	printf("%d! = %d\n", num, fact(num));

	return 0;
}