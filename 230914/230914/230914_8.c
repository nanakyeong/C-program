#include <stdio.h>

int main(void) {

	int count, hap = 0;

	for (count = 1; count <= 10; count++) 
	{
		if (count % 2 == 1) {
			hap += count;
			printf("%02d���� ������ ���: hap = %02d\n", count, hap);
		}
	}

	printf("1 + 3 + ~ + 7 + 9 = %02d\n", hap);
	return 0;
}