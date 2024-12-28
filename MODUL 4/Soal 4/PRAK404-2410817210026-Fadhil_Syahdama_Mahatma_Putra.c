#include <stdio.h>
int main(){

    int zani;
    float satu, duwa;

    do{
    printf("\nPilih program\n");
    printf("1. Penjumlahan\n"); 
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Masukkan Pilihan : ");
    scanf("%d", &zani);

    switch (zani)
    {
    case 1:
        printf("Masukkan nilai pertama : ");
        scanf("%f", &satu);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &duwa);
        printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", satu, duwa, satu + duwa);
        break;

    case 2 :
        printf("Masukkan nilai pertama : ");
        scanf("%f", &satu);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &duwa);
        printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", satu, duwa, satu-duwa);
        break;

    case 3 :
        printf("Masukkan nilai pertama : ");
        scanf("%f", &satu);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &duwa);
        printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", satu, duwa, satu*duwa);
        break;

    case 4 :
        printf("Masukkan nilai pertama : ");
        scanf("%f", &satu);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &duwa);
        printf("Hasil dari pembagian %.2f dengan %.2f adalah %.2f\n", satu, duwa, satu/duwa);\
        break;
    
    case 5 :
        printf("Terimakasih, telah menggunakan kalkulator Fadhil Syahdama Mahatma Putra\n");
        break;
    
    default:
        printf("Input anda salah, silahkan coba lagi\n");
        break;
    }
    } while (zani != 5);
}