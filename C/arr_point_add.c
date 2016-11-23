#include<stdio.h>
int main(){
int a[10],*b,i;
for(i=0;i<10;i++)
printf("\n a[%d] =  %u ",i,(a+i));
b = a+5;
a[5]=10;
printf("\n &b = %u b = %u *b = %u a[5] = %u ", &b,b,*b, &a[5]);


}
