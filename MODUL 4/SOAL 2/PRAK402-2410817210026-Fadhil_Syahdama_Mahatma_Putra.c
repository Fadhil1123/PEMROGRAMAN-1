#include <stdio.h>

int main() {
    int botan, i;

    scanf("%d", &botan);

    for(i = 1; i <= botan; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    if (botan % 2 == 0) { 
        for (i = botan; i >= 2; i -= 2) {
            printf("%d ", i);
        }
    /*} else { 
        for (i = botan - 1; i >= 2; i -= 2) {
            printf("%d ", i);
        }
    }*/
}
}