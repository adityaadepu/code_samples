#include<stdio.h>
int fact(n)
int n;
{
if (n == 1) return 1;
return n * fact(n-1);
}

int main(){
int n, N;
scanf("%d",&n);
N = fact(n);
printf("\n %d! = %d",n, N);
}
