#include <stdio.h>

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float divi(float a, float b) { return a / b; }

int main() {
    float a, b;
    char op;
    float result;

    scanf("%f %f %c", &a, &b, &op);

    if(op == '+')
        result = add(a, b);
    else if(op == '-')
        result = sub(a, b);
    else if(op == '*')
        result = mul(a, b);
    else if(op == '/')
        result = divi(a, b);
    else {
        printf("Invalid");
        return 0;
    }

    printf("%.0f", result);

    return 0;
}