#include <stdio.h>

void my_divisor(int a) {
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            printf("%d ",i);
        }
    }

    printf("\n");
}
int main(void) {

    for (int i = 1; i <= 10; i++)
        my_divisor(i);
    return 0;
}