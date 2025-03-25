#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

void safe_function(const char *str) {
    printf("access: %s\n", str);
}

int main() {
    int num = 5;
    const char *message = "meow!";

    safe_function(message);

    int result = factorial(num);
    printf("factorial of %d is %d.\n", num, result);

    return 0;
}

