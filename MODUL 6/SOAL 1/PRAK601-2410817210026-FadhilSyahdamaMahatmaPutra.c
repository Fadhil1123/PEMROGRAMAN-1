#include <stdio.h>
int main(){
    int boc, chi;
    int za, ni;

    scanf("%d %d", &boc, &chi);
    int matriks[boc][chi];

    for(za = 0; za < boc; za++){
        for(ni = 0; ni < chi; ni++){
            scanf("%d", &matriks[za][ni]);
        }
    }

    for(za = 0; za < boc; za++) {
        for(ni = 0; ni < chi; ni++) {
            printf("%d ", matriks[za][ni]);
        }
        printf("\n");
    }
}