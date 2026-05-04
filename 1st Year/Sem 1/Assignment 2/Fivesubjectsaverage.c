#include <stdio.h>

int main() {
    double marks1, marks2, marks3, marks4, marks5;
    double totalMarks;
    double averageMarks;
    double percentage;

    printf("Enter marks for five subjects:\n");
    printf("Subject 1: ");
    scanf("%lf", &marks1);

    printf("Subject 2: ");
    scanf("%lf", &marks2);

    printf("Subject 3: ");
    scanf("%lf", &marks3);

    printf("Subject 4: ");
    scanf("%lf", &marks4);

    printf("Subject 5: ");
    scanf("%lf", &marks5);

    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;
    averageMarks = totalMarks / 5;
    percentage = (totalMarks / (5 * 100)) * 100;

    printf("\nTotal Marks: %.2f\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
