#include <stdio.h>

int main(){
    float a;
    float b;

    scanf("%f" "%f", &a, &b);

    float volume = 22.0/7.0 * a * a * b;
    float luas = 2.0 * 22.0/7.0 * a * (a + b);
    float kelilinng = 2.0 * 22.0/7.0 *a;

    printf("Volume = %.2f\n", volume);
    printf("Luas =  %.2f\n", luas);
    printf("Keliling = %.2f  ", kelilinng);
}