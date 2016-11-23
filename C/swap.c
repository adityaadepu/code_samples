#include<stdio.h>
void swap1(i,j)
int i, j;
{
int temp;

temp = i;
i = j;
j = temp;

printf("\nIn swap1: a = %d , b = %d ",i,j);
}

void swap2(i,j)
int *i, *j;
{
int temp;

temp = *i;
*i = *j;
*j = temp;
printf("\nIn swap2: i = %d , j = %d" , *i, *j);

}

int main(){
int a ,b;
a = 1;
b = 2;
//test 
printf("\nIn main: a = %d , b = %d" , a, b);
swap1(a,b);
printf("\nAfter swap1: a = %d , b = %d" , a, b);
swap2(&a, &b);
printf("\nAfter swap2: a = %d , b = %d" , a, b);

}
