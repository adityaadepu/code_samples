#include<stdio.h>
int main(){

int n, a[100],j,k, i,temp;
printf("Give n: ");
scanf("%d",&n);
printf("\n Enter n numbers : ");
for(i=0;i<n;i++)
scanf("%d",(a+i));
printf("\nSorted numbers are : ");
for(i=0;i<n;i++){
printf("\n");
for(j=0;j<n-1;j++){
if(a[j]<a[j+1]){
temp = *(a+j);
*(a+j) = *(a+j+1);
a[j+1] = temp;

}
}
for(k=0;k<n;k++)
printf("%d ",*(a+k));

}
}
