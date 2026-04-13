#include <stdio.h>

int main(void) {
    int n[31] = {0};
    for (int i = 0; i < 28; i++) {
        scanf("%d", &n[i]);
        n[i] = 1;
    }

    for (int j = 0; j < 30; j++) {
        if (n[j] == 0) {
            printf("%d\n", n[j]);
        }
    }

    return 0;
}