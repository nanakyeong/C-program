#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num_students, i, total = 0;
    double avg;

    printf("학생 수 입력:  ");
    scanf_s("%d", &num_students);

    int* score;
    score = (int*)malloc(num_students * sizeof(int));

    for (i = 1; i <= num_students; i++) {

        printf("학생 # %d-%d 성적 입력: ", num_students, i);
        scanf_s("%d", &score[i]);
        total += score[i];

    }

    printf("총점: %d\n", total);

    for (i = 1; i <= num_students; i++) {

        printf("학생 # %d-%d 성적 출력: %d\n", num_students, i, score[i]);
    }

    avg = total / (double)num_students;
    printf("평균 점수:  %.2f", avg);

    free(score);
    score = NULL;

    return 0;

}