#include <stdio.h>
#include <math.h>

void checkArmstrong(int n) {
    int original = n, sum = 0, digits = 0;

    int temp = n;
    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if(sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

int main() {
    int n;
    scanf("%d", &n);
    checkArmstrong(n);
    return 0;
}