#include <stdio.h>
int main(){
int a,b,i,j;
scanf("%d %d",&a, &b);

for(i=a, j=b; i<=b && j>=a; i++,j-- ){
    printf("%d %d",i,j);
    if(i<b || j>a) {printf(" - ");} 
}

for(i=a,j=b; i>=b && j<=a; i--,j++){
    printf("%d %d",i ,j);
    if(i>b || j<a) {printf(" - "); }
}
}