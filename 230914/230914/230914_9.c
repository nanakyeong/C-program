#include <stdio.h>

int main(void) {

	int count = 0, hap = 0;

	while(count <= 10) {
		hap += count;
		printf("hap = %d, count = %d\n", hap, count);
		count++;
	}

	printf("%d\n", hap);

	return 0;
	
}