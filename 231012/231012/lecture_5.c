#include <stdio.h>

void sort(int arr[], int count);
void swap(int* pa, int* pb);

int main(void) {
    int i;
    int arr[5] = { 5, 4, 3, 2, 1 }; 
    int count = sizeof(arr) / sizeof(arr[0]);

    printf("배열 정렬 전: ");
    printf("\n");

    for (i = 0; i < count; i++) {
        printf("%d ", arr[i]); 
    }

    sort(arr, 5); 

    return 0;
}

void sort(int arr[], int count) {
    int i, j;

    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (arr[j] < arr[i]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }

    printf("\n배열 정렬 후: \n");
    for (int c = 0; c < count; c++) {
        printf("%d ", arr[c]);
    }
}

void swap(int* pa, int* pb) {
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
