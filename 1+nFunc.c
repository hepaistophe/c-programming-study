#include <stdio.h>

int sum_n(int);
int main(void) {
    int n;
    scanf("%d", &n);
    int result = sum_n(n);
    printf("%d", result);
    return 0;
}

int sum_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}