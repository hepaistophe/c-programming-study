#include <stdio.h>

int hours, minutes;
void convert(int);
int main(void) {
    int min;
    scanf("%d", &min);
    convert(min);
    printf("%d minutes are %d hours and %d minutes", min, hours, minutes);
    return 0;
}

void convert(int minute) {
    hours = minute / 60;
    minutes = minute % 60;
    return;
}