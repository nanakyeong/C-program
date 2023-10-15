#include <stdio.h>

void sort(int arr[], int count);
void swap(int* pa, int* pb);

int main(void) {
    int i;
    int arr[5] = { 5, 4, 3, 2, 1 }; 
    int count = 5;

    printf("배열 정렬 전: ");

    for (i = 0; i < count; i++) {
        printf("%d ", arr[i]); 
    }

    sort(arr, count); 

    printf("\n배열 정렬 후: ");
    for (i = 0; i < count; i++) {
        printf("%d", arr[i]);
        
    }

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

  
}

void swap(int* pa, int* pb) {
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
