#include <stdio.h>
int main(){

int zani,bocchi;
int total=0;
scanf("%d %d",&zani, &bocchi);
for(int i=1; i<=zani; i++){
    int hasil=0;

    for(int j=i;j>=1; j--){
        hasil+=j*bocchi;
        printf("(%d*%d)",j,bocchi);
        if(j>1){
            printf(" + ");
        } }
printf("= %d\n",hasil);
total+=hasil;}
printf("%d",total);
}