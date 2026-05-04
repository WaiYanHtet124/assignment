#include <stdio.h>

int Printprime(int num);

void main()
{
    printf("Prime numbers between 2 to 999: \n");

    for (int num = 2; num <= 999; num++) {
        if (Printprime(num)) {
            printf("%d\t", num);
        }
    }
}

int Printprime(int num)
{
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}
