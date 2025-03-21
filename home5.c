#include <stdio.h>

int main() {
    printf("0-100 միջակայքի կենտ թվերը:\n");
    
    for (int i = 1; i <= 100; i += 2) {
        printf("%d ", i);
    }
    
    printf("\n");
    return 0;
}

