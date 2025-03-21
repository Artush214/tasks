#include <stdio.h>

int main() {
    int a, b, count = 0;

    printf("Մուտքագրեք a և b: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (i % 5 == 0) {
            count++;
        }
    }

    printf("5-ի բաժանվող թվերի քանակը: %d\n", count);

    return 0;
}
	

