#include <stdio.h>

//long long int power(int, int);
int main(void) {

    return 0;
}

long long int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result = result * base;
    }
    return result;
}