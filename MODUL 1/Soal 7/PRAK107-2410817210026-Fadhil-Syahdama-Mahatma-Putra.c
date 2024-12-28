#include <stdio.h>
int main(){
    int a,  b, c, kel, har, bia;
    a = 4;
    b = 5;
    c = 7;
    kel = a + b + c;
    har = 85000;
    bia = har * kel;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", kel);
    printf("Harga tanah per meter adalah %d\n", har);
    printf("jawaban :\n");
    printf("Biaya yang diperlukan pak dengklek adalah : %d", bia);
}