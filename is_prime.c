#include <stdio.h>

int is_prime(int a) {
    if (a < 2) {
        return 0;
    }
    for (int i = 2; i < a; i++) {
        if (a % i == 0)
            return 0;
    }
    return 1;
}

int main(void) {

    for (int i = 2; i <= 100; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}