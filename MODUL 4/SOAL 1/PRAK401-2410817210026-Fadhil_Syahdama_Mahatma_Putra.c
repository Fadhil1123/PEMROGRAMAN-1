#include <stdio.h>
int main(){
    int bocchi,i;
    char zani;
        scanf("%d %c", &bocchi, &zani);
    for (i = 1; i < 51; i++) {
        if (i % bocchi == 0) {
            printf("%c ", zani);
        } else {
            printf("%d ", i);
        }
    }
}