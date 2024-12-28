#include <stdio.h>
int main(){
    int nambe;

    scanf("%d", &nambe);

    if(nambe==0){
        printf("Nol");
    } else if(nambe>0){
        printf("Positif");
    } else if(nambe<0){
        printf("Negatif");
    }
}