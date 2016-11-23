#include<stdio.h>
int main(){
int a[10],i=0,j, b[5][10];
printf(" a = %p    %u \n\n",a,a);
printf(" (a+1) = %u \n\n",(a+1));
printf(" (a+2) = %u \n\n", (a+2));
a[2]= 6;
printf(" *(a+2) = %d a[2] = %d \n\n",*(a+2),a[2]);
printf(" (a+10) = %u \n\n", (a+10));
printf(" (a+100) = %u \n\n", (a+100));
for(i=0;i<100;i++)
printf("*(a+%d) = %c \n\n",i,*(a+i));

for(i=0;i<5;i++){
printf("\n b[%d] = %u \n\n",i, (b+i));
for(j=0;j<10;j++){
printf("\n b[%d][%d] = %u \n\n",i,j,(*(b+i)+j));

}
}
}
