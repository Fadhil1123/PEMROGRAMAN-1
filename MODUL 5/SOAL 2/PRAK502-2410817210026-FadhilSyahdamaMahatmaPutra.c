#include <stdio.h> 

int hitung(int nilai1, int nilai2){ 
    return nilai1 - nilai2;
} 

int mutlak(int angka){ 
    if (angka < 0){
        return -angka;
    }
    return angka;
} 

int main() 
{ 

int a,b,c,d; 

scanf("%d",&a); 
scanf("%d",&c); 
scanf("%d",&b); 
scanf("%d",&d); 

int Hasil = mutlak(hitung(a,b)) + mutlak(hitung(c,d)); 

printf("%d",mutlak(Hasil)); 
return 0; 
}