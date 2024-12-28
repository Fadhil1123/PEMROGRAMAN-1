#include <stdio.h>
int main(){
    int changli;
    int a;

    scanf("%d", &changli);

    int zetsu[changli];

    for(a = 0; a < changli; a++){
        scanf("%d", &zetsu[a]);
    }

    for(a = 0; a < changli; a++){
        printf("%d ", zetsu[a] * (a+1));
    }
}