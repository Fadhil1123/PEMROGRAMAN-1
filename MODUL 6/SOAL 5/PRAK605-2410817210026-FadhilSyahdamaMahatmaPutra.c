#include <stdio.h>

void kafka(int matriks[][100], int ordo){
    for(int i = 0; i < ordo; i++){
        for(int j = 0; j < ordo; j++){
            scanf("%d", &matriks[i][j]);
        }
    }
}

void makima(int matriks[][100], int ordo){
    for(int i = 0; i < ordo; i++){
        for(int j = 0; j < ordo; j++){
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
}

void x(int matriks1[][100], int matriks2[][100], int hasil[][100], int ordo){
    for(int i = 0; i < ordo; i++){
        for(int j = 0; j < ordo; j++){
            hasil[i][j] = 0;
            for (int k = 0; k < ordo; k++) {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
}

int main(){
    int ordo;

    scanf("%d", &ordo);

    int matriks1[100][100], matriks2[100][100], hasil[100][100];

    printf("Matriks A\n");
    kafka(matriks1, ordo);
    printf("Matriks B\n");
    kafka(matriks2, ordo);

    x(matriks1, matriks2, hasil, ordo);
    printf("Matriks AXB\n");
    makima(hasil, ordo);
}