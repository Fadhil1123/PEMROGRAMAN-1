#include <stdio.h> 
 
void Biodata(int tahunLahir, char Namaku[] ,char Asal[]){ 
    int tahun_sekarang = 2020; 

    printf("\nPerkenalkan Nama Saya : %s\n", Namaku);
    printf("Umur Saya : %d\n", tahun_sekarang-tahunLahir);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya dari : %s\n ", Asal);
}

int main() { 
int tahunLahir; 
char NamaKu[20], Asal[15]; 

    scanf(" %d",&tahunLahir); 
    scanf(" %[^\n]%*c",&NamaKu); 
    scanf(" %[^\n]%*c",&Asal); 

    Biodata(tahunLahir, NamaKu, Asal); 
    return 0; 
}