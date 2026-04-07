#include <stdio.h>

double BMI_calc(float, float);
int main(void) {
    int height, weight;
    printf("Enter height: ");
    scanf("%d", &height);
    printf("Enter weight: ");
    scanf("%d", &weight);
    float bmi = BMI_calc(height, weight);
    printf("Your BMI is %.2f\n", bmi);
    if (bmi <= 18.5) {
        printf("Underweight");
    }
    else if (bmi > 18.5 && bmi <= 24.9) {
        printf("Normal weight");
    }
    else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("Overweight");
    }
    else
        printf("Obesity");
    return 0;
}

double BMI_calc(float hei, float weight) {
    float heiM = hei/100;
    double bmi = weight / (heiM * heiM);
    return bmi;
}