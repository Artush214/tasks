#include <stdio.h>

int main() {
    int n;
    
    printf("ուտքագրելթիվ :\n");
    scanf("%d", &n);

    while (n != 0) {
        printf("%d ", n % 10);
        n /= 10;
    }
    
    printf("\n");
    return 0;
}

