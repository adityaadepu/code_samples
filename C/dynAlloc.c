#include<stdio.h>
int main(){
int *b;

b = (int *)malloc(10*sizeof(int));
printf ("	b	= %u \n\n", b);
printf ("	b+1	= %u \n\n", (b+1));
printf ("	b+2	= %u \n\n", (b+2));
b[2]=4;
printf ("	*(b+2)	= %u \n\n", *(b+2));

}
