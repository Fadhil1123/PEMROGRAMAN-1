#include <stdio.h>
int main(){
    char nama[50], nama2[50], nama3[50], nama4[50];
    int nim[50];
    int kelas;
    char tempat [100]; 
    int tanggal, bulan, tahun;
    char alamat [100];
    char hobby [50];
    int hp[50];
    
    printf("Nama : ");              
    scanf("%s" "%s" "%s " "%s", &nama, &nama2, &nama3, &nama4);

    printf("NIM : ");               
    scanf("%s",&nim );

    printf("Kelas Paralel :  ");    
    scanf("%d", &kelas);

    printf("Tempat/Tanggal Lahir :   ");     
    scanf("%s"  "%d" "%d" "%d",&tempat,&tanggal, &bulan, &tahun);

    getchar();
    printf("Alamat : ");             
    scanf(" %[^\n]", alamat);

    printf("Hobby :  ");
    scanf("%s",&hobby);

    printf("No HP :  ");
    scanf("%s", &hp);

    printf("\n\n");
    printf("Nama  :%s %s %s %s", nama, nama2, nama3, nama4); 
    printf("\nNIM   :%s", nim);
    printf("\nKelas Paralel :%d", kelas);
    printf("\nTempat/Tanggal Lahir  :%s %02d-%02d-%d", tempat, tanggal, bulan, tahun);
    printf("\nAlamat    :%s", alamat);
    printf("\nHobby     :%s", hobby);
    printf("\nNo HP     :%s", hp); 
}