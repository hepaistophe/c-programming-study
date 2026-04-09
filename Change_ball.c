#include <stdio.h>

int main (void) {
    int N, M;
    int i, j;
    scanf("%d %d", &N, &M);
    int babu[101] = {0};
    for  (int i = 0; i < N; i++) {
        babu[i] = i + 1;
    }

    for (int a = 0; a < M; a++) {
        scanf("%d %d", &i, &j);
        int tmp;
        tmp = babu[i -1];
        babu[i - 1] = babu[j - 1];
        babu[j - 1] = tmp;
    }

    for (int a = 0; a < N; a++) {
        printf("%d ", babu[a]);
    }

    return 0;
}