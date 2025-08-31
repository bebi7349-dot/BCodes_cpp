#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, count = 0;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // count digits
    int temp = num;
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    // calculate sum of powers
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    // check Armstrong condition
    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);

    return 0;
}
