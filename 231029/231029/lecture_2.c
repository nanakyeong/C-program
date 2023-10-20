#include <stdio.h>
#include <stdlib.h>

struct Student {

    int sno;
    char name[10];
    int score;

};

int main(void) {

    int num_students, i;

    printf("학생 수 입력:  ");
    scanf_s("%d", &num_students);

    struct Student* std;
    std = (struct Student*)malloc(num_students * sizeof(struct Student));

    for (i = 1; i <= num_students; i++) {

        printf("학생 #%d-%d 학번 입력: ", num_students, i);
        scanf_s("%d", &(std[i].sno));

        printf("학생 #%d-%d 이름 입력: ", num_students, i);
        scanf_s("%s", std[i].name, sizeof(std[i].name));

        printf("학생 #%d-%d 점수 입력: ", num_students, i);
        scanf_s("%d", &(std[i].score));

    }
 

    for (i = 1; i <= num_students; i++) {

        printf("학생 #%d-%d 학번 출력: %d\n", num_students, i, std[i].sno);
        printf("학생 #%d-%d 이름 출력: %s\n", num_students, i, std[i].name);
        printf("학생 #%d-%d 성적 출력: %d\n", num_students, i, std[i].score);

    }


    free(std);
    std = NULL;

    return 0;

}