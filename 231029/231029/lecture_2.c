#include <stdio.h>
#include <stdlib.h>

struct Student {

    int sno;
    char name[10];
    int score;

};

int main(void) {

    int num_students, i;

    printf("�л� �� �Է�:  ");
    scanf_s("%d", &num_students);

    struct Student* std;
    std = (struct Student*)malloc(num_students * sizeof(struct Student));

    for (i = 1; i <= num_students; i++) {

        printf("�л� #%d-%d �й� �Է�: ", num_students, i);
        scanf_s("%d", &(std[i].sno));

        printf("�л� #%d-%d �̸� �Է�: ", num_students, i);
        scanf_s("%s", std[i].name, sizeof(std[i].name));

        printf("�л� #%d-%d ���� �Է�: ", num_students, i);
        scanf_s("%d", &(std[i].score));

    }
 

    for (i = 1; i <= num_students; i++) {

        printf("�л� #%d-%d �й� ���: %d\n", num_students, i, std[i].sno);
        printf("�л� #%d-%d �̸� ���: %s\n", num_students, i, std[i].name);
        printf("�л� #%d-%d ���� ���: %d\n", num_students, i, std[i].score);

    }


    free(std);
    std = NULL;

    return 0;

}