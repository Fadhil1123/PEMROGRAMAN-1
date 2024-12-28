#include <stdio.h>
int main() {
    float a, b, i, j, x, y, hasil;

    printf("\n");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    hasil = (((a - b) * i) / j) - (x + y);
    printf("%.3f", hasil);    
}