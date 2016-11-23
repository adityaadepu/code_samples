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
for(j=i+1;j<n;j++){
if(a[i]<a[j]){
temp = *(a+j);
*(a+j) = *(a+i);
a[i] = temp;

}
}
for(k=0;k<n;k++)
printf("%d ",*(a+k));

}
}
