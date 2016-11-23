#include<stdio.h>
int main(){
int *b[5],i , (*x)[10];

for(i=0;i<5;i++)
b[i] = (int *)malloc(10*sizeof(int));

printf("   b   = %u \n\n", b);
printf(" (b+1) = %u \n\n", (b+1));
printf(" (b+2) = %u \n\n", (b+2));
printf("*(b+2) = %u \n\n", *(b+2));
printf("*(b+2)+3= %u \n\n",*(b+2)+3);
*(*(b+2)+3) = 5;
printf("b[2][3] = %d \n\n", b[2][3]);

x = (int (*)[])malloc(10*5*sizeof(int));
printf("   x   = %u \n\n", x);
printf(" (x+1) = %u \n\n", (x+1));
printf(" (x+2) = %u \n\n", (x+2));
printf("*(x+2) = %u \n\n", *(x+2));
printf("*(x+2)+3= %u \n\n",*(x+2)+3);
*(*(x+2)+3) = 5;
printf("x[2][3] = %d \n\n", x[2][3]);

}
