#include <stdio.h>

void checkPerfect(int n) {
    int sum = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}

int main() {
    int n;
    scanf("%d", &n);
    checkPerfect(n);
    return 0;
}