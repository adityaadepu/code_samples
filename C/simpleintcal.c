#include <stdio.h>
int main(){

int p, n;
float r,si;

printf("enter values for p, n, r\n");
scanf("%d %d %f",&p,&n,&r);

si = p*n*r/100;

printf("%f",si);

return 0;
}

