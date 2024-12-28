#include <stdio.h>
int main(){
    int holo;
    int botan, wisadel, peco;

    scanf("%d", &holo);

    if(holo>=86400){
        botan = holo/86400;
        holo = holo%86400;
    } else {
        botan = 0;
    }

    if(holo>=3600){
        wisadel = holo / 3600;
        holo = holo % 3600;
    } else {
        wisadel = 0;
    }

    if(peco>=60){
        peco = holo / 60;
        holo = holo % 60;
    } else {
        peco = 0;
    }

    if(botan>0){
        printf("%d Hari %0.2d:%0.2d:%0.2d", botan, wisadel, peco, holo);
        } else {
            printf("%0.2d:%0.2d:%0.2d", wisadel, peco, holo);
        }
}