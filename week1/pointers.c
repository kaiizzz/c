#include <stdio.h>

int main(void) {
    
    int num = 1;
    int* ptr = &num;
    printf("%d\n", num);
    printf("%p\n\n", ptr);

    int* ptr2 = ptr;
    printf("%p", ptr2);
    
    
    return 0;
}