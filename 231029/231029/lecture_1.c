#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num_students, i, total = 0;
    double avg;

    printf("�л� �� �Է�:  ");
    scanf_s("%d", &num_students);

    int* score;
    score = (int*)malloc(num_students * sizeof(int));

    for (i = 1; i <= num_students; i++) {

        printf("�л� # %d-%d ���� �Է�: ", num_students, i);
        scanf_s("%d", &score[i]);
        total += score[i];

    }

    printf("����: %d\n", total);

    for (i = 1; i <= num_students; i++) {

        printf("�л� # %d-%d ���� ���: %d\n", num_students, i, score[i]);
    }

    avg = total / (double)num_students;
    printf("��� ����:  %.2f", avg);

    free(score);
    score = NULL;

    return 0;

}