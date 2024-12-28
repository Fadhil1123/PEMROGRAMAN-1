#include <stdio.h>
int main(){
    float A;
    float B;

    printf("Masukan nilai pertama : ");
    scanf("%f",  &A);
    printf("Masukan nilai kedua : ");
    scanf("%f", &B);

    float c = A + B;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", A,  B, c);
}