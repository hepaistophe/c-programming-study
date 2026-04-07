#include <stdio.h>

int is_prime(int);

int main(void) {
    int n;

    // 입력 대기 중임을 알리는 친절한 안내문 추가
    printf("Write a number: ");
    scanf("%d", &n);

    if (is_prime(n) == 1) {
        printf("%d is prime number!\n", n);
    } else {
        printf("%d is not prime number.\n", n);
    }

    return 0;
}

int is_prime(int n) {
    // 1 이하는 소수가 아니므로 바로 거짓(0) 반환
    if (n <= 1) {
        return 0;
    }

    // 자기 자신보다 작은 수(n - 1)까지만 반복합니다.
    for (int i = 2; i < n; i++) {
        // 나누어 떨어지는 수(약수)를 하나라도 발견했다면?
        if (n % i == 0) {
            return 0; // 더 이상 검사할 필요 없이 즉시 0(거짓)을 반환하며 함수 종료!
        }
    }

    // 반복문을 무사히 다 통과했다면 한 번도 안 나누어 떨어졌다는 뜻이므로 1(참) 반환
    return 1;
}