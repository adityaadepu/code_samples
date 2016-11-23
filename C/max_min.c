#include<stdio.h>
void printArray(int a[],int n){
int i;
printf("\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
int main(){
int n, a[100], max[50], min[50], M, m, mid, i ,j, k;
printf("\nEnter n: ");
scanf("%d",&n);
printf("\n Enter %d numbers : ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printArray(a,n);
j=0;
k=0;
for(i=0;i<n-1;i=i+2){
if(a[i]<a[i+1]){
	min[j++]=a[i];
	max[k++]=a[i+1];
} else {
	min[j++]=a[i+1];
	max[k++]=a[i];
}
}
if(n%2!=0){
	min[j++] = a[n-1];
	max[k++] = a[n-1];
}
printArray(min,j);
printArray(max,k);
m = min[0];
for(i=1;i<j;i++)
if(min[i]<m) 
m = min[i];

M = max[0];
for(i=1;i<k;i++)
if(max[i]>M)
M = max[i];

printf("\nMin : %d, Max: %d",m,M);
}
