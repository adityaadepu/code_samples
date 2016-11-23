#include<stdio.h>
int main(){
int a[100],l, n,i,j,k,max,nextmax,temp;
printf("\n Enter n: ");
scanf("%d",&n);
l = 2*n-1;
printf("\n Enter %d numbers: ",n);
for(i=n;i<(2*n);i++)
scanf("%d",&a[i]);
i=l;
while(i>1){
if(a[i]>a[i-1]){
a[i/2] = a[i];
} else {
a[i/2] = a[i-1];
}
i=i-2; 
}
for(i=1; i<2*n;i++)
printf("%d ",a[i]);
printf("\nMax = %d",a[1]);
if(a[2]>a[3])
{
i = 2;
nextmax = a[3];
} else {
i=3;
nextmax = a[2];
}

do{
printf("\ni=%d,nextmax=%d",i,nextmax);
if(a[2*i]>a[2*i+1]){
if(a[2*i+1]>nextmax)
	nextmax = a[2*i+1];
i = 2*i;
} else {
if(a[2*i]>nextmax)
	nextmax = a[2*i];
i = 2*i+1;
}
printf("\ni=%d,nextmax=%d",i,nextmax);

}while(2*i<l);

printf("\n Next max: %d",nextmax);
}
