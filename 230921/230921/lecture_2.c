#include <stdio.h>

double sum(double num1, double num2);
double sub(double num1, double num2);
double mul(double num1, double num2);
double div(double num1, double num2);
void calculator(int selector);

int main(void) {
    int sel;

    printf("1. 더하기 2. 빼기 3. 곱하기 4. 나누기: ");
    scanf_s("%d", &sel);

    calculator(sel);

    return 0;
}

void calculator(int selector) {

    double num1, num2;


    printf("숫자 1을 입력하시오: ");
    scanf_s("%lf", &num1);

    printf("숫자 2를 입력하시오: ");
    scanf_s("%lf", &num2);

    double res;
    if (selector == 1) res = sum(num1, num2);
    else if (selector == 2) res = sub(num1, num2);
    else if (selector == 3) res = mul(num1, num2);
    else if (selector == 4) res = div(num1, num2);

    printf("Result = %lf\n", res);
}

double sum(double num1, double num2) {

    return num1 + num2;
}

double sub(double num1, double num2) {

    return num1 - num2;
}

double mul(double num1, double num2) {

    return num1 * num2;
}

double div(double num1, double num2) {

    return num1 / num2;
}


