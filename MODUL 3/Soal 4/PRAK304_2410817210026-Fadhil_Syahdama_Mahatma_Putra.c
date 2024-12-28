#include <stdio.h>
int main(){
    int bocchi;

    scanf("%d", &bocchi);

    if(bocchi==0){
        printf("Nol");
    } else if(bocchi>0 && bocchi<10){
        printf("Satuan");
    } else if(bocchi>10 && bocchi<20){
        printf("Belasan");
    } else if(bocchi>=20 && bocchi<100){
        printf("Puluhan");
    }
    else if(bocchi>=100){
        printf("Anda Menginput Melebihi Limit Bilangan ");
    }
}