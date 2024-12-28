#include <stdio.h>
int main(){
    int nambe;

    scanf("%d", &nambe);

    switch(nambe/10){
        case 0: case 1: case 2: case 3: case 4:
            printf("E");
            break;

        case 5:
            printf("D");
            break;
        
        case 6:
            printf("C");
            break;

        case 7:
            printf("B");
            break;

        case 8: case 9: case 10:
            printf("A");
            break;
    }
}