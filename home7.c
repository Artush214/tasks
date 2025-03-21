#include <stdio.h>

int main() {
    int n, reversed = 0;

    printf("մուտքագրել թիվ:\n");
    scanf("%d", &n);

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    printf("շրջված թիվ: %d\n", reversed);
    return 0;
}

