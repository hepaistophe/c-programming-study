#include <stdio.h>

int next_value();
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf( "%d\n", next_value());
    }
}

int next_value() {
    static int n;
    n = n + 3;
    return (n - 3);
}
