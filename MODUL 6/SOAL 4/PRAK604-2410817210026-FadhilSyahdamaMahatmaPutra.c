#include <stdio.h>
#include <string.h>

void bandingkanArray(char bocchi[], char rover[], int n) {
    int hashCount = 0;  
    int starCount = 0;  
    
    for (int i = 0; i < n; i++) {
        if (bocchi[i] == ' ' && rover[i] == ' ') {
            printf(" ");
        } else if (bocchi[i] == rover[i]) {
            printf("*");
            starCount++;  
        } else {
            printf("#");
            hashCount++;  
        }
    }
    printf("\n");
    printf("* = %d\n", starCount);
    printf("# = %d\n", hashCount);

    if (hashCount > starCount) {
        printf("Pesan Palsu\n");
    } else if (starCount > hashCount) {
        printf("Pesan Asli\n");
    } 
}

int main() {
    char bocchi[100], rover[100];
    int n1, n2;

    fgets(bocchi, sizeof(bocchi), stdin);
    fgets(rover, sizeof(rover), stdin);

    bocchi[strcspn(bocchi, "\n")] = '\0';
    rover[strcspn(rover, "\n")] = '\0';

    n1 = strlen(bocchi);
    n2 = strlen(rover);

    if (n1 != n2) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        bandingkanArray(bocchi, rover, n1);
    }
}