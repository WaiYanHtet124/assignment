#include <stdio.h>

int main() {
    int num;

    printf("Enter five numbers:\n");


    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("%d is even\n", num);
        } else {
            printf("%d is odd\n", num);
        }
    }

    return 0;
}
