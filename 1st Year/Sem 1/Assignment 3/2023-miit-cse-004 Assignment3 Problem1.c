#include<stdio.h>
int main() {
    printf("Even numbers between 1 and 20:\n");


    for (int i = 1; i <= 20; i++) {

        if (i % 2 == 0) {
            printf("%d\n", i); // Print the even number
        }
    }

    return 0;
}
