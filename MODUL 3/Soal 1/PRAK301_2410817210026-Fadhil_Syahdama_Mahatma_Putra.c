#include <stdio.h>

int main() {
    int haha, hihi, hoho;

    scanf("%d %d %d", &haha, &hihi, &hoho);
    if (haha <= hihi && haha <= hoho) {
        if (hihi <= hoho) {
            printf("%d %d %d\n", haha, hihi, hoho);
        } else {
            printf("%d %d %d\n", haha, hoho, hihi);
        }
    } else if (hihi <= haha && hihi <= hoho) {
        if (haha <= hoho) {
            printf("%d %d %d\n", hihi, haha, hoho);
        } else {
            printf("%d %d %d\n", hihi, hoho, haha);
        }
    } else if (hoho <= haha || hoho<=hihi){
        if (haha <= hihi) {
            printf("%d %d %d\n", hoho, haha, hihi);
        } else {
            printf("%d %d %d\n", hoho, hihi, haha);
        }
    }
}