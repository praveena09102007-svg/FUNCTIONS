#include <stdio.h>

void checkLeap(int year) {
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap Year");
    else
        printf("Not Leap Year");
}

int main() {
    int year;
    scanf("%d", &year);
    checkLeap(year);
    return 0;
}