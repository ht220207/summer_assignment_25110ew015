#include <stdio.h>

int main() {
    int num, largestPrime = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num % 2 == 0) {
        largestPrime = 2;
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largestPrime = i;
            num /= i;
        }
    }

    if (num > 2)
        largestPrime = num;

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}