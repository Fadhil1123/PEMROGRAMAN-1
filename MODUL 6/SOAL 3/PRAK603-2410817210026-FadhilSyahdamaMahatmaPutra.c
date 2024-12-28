#include <stdio.h>
int main(){
    int pozem, changli, i, j;

    scanf("%d %d", &pozem, &changli);

    if(pozem != changli){
        printf("Jumlah tidak sama");
        return 1;
    }

    int x[pozem], y[changli];

    for(i = 0; i < pozem; i++){
        scanf("%d", &x[i]);
    }

    for(j = 0; j < changli; j++){
        scanf("%d", &y[j]);
    }

    for(i = 0; i < pozem; i++){
        printf("%d ", x[i] * y[i]);
    }
}  