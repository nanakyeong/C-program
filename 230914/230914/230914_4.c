#include <stdio.h>

int main() {

    int year;
    scanf_s("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("�����Դϴ�.");
    }
    else {
        printf("������ �ƴմϴ�.");
    }

    return 0;

}
