// given an array, this insertion sort will sort it in O(n^2) time
#include <stdio.h>

void insertion_sort(int a[]);
void swap(int *a, int *b);

void insertion_sort(int a[]) {
    //size_t arr_len = sizeof(a) / sizeof(a[0]);
    int arr_len = 6;

    for (int i=0; i < arr_len+1; i++) {
        for (int j=i; j>0; j--) {
            if (a[j] > a[i]) {
                swap(&a[j], &a[i]);
            }
        }
    }
    
    for (int i=0; i < arr_len; i++) {
        printf("%d,", a[i]);
    }
}

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int a[] = {6,2,4,3,72,8};
    insertion_sort(a);
}

