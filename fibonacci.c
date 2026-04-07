#include <stdio.h>

int fib(int n) {
    int i, tmp, fib = 1, fib_p = 0;
    if (n <= 1)
        return n;
    for (i = 2; i <= n; i++) {
        tmp = fib;
        fib += fib_p;
        fib_p = tmp;
    }
    return fib;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));

    return 0;
}