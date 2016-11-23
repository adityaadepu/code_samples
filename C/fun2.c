#include<stdio.h>
void fun2(int *i, int *j, int *k)
{

printf("address i = %p  j = %p  k = %p  \n", i, j ,k);
*i = 21; *j = 22; *k = 23;
printf("in function %d %d %d \n", *i, *j, *k);

}

int main(){

int a, b, c;

scanf("%d%d%d",&a,&b,&c);
printf("Before call %d %d %d \n", a, b, c);
printf("Addresses %p  %p %p\n",(void*)&a,(void*)&b,(void*)&c);
fun2(&a,&b,&c);
printf("after call %d %d %d \n", a, b, c);

}

