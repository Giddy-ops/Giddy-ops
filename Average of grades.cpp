//program to calculate average of grades
#include <stdio.h>
int main() {
    int math, english, physics, sum;
    float average;
    
    printf("Enter the marks for Math:\n");
    scanf("%d", &math);
    
    printf("Enter the marks for English:\n");
    scanf("%d", &english);
    
    printf("Enter the marks for Physics:\n");
    scanf("%d", &physics);
    
    sum = math + english + physics;
    average = sum / 3.0;
    
    printf("Your Average marks is %.2f\n", average); // Print average with two decimal places
    
    if (average >= 70) {
        printf("Grade: A\n");
    } else if (average >= 60) {
        printf("Grade: B\n");
    } else if (average >= 50) {
        printf("Grade: C\n");
    } else if (average >= 40) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

