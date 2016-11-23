#include<stdio.h>

int max(a,b)
int a,b;
{
if (a>b) return a;
else return b;
}
int min(a,b)
int a,b;
{
if (a<b) return a;
else return b;
}
void buildTourn(a,n)
int a[],n;
{
int i;
for(i=2*n-2;i>1;i=i-2)
a[i/2] = max(a[i],a[i+1]);
}
int nextMax(a,n)
int a[],n;
{
int next,i;
next = min(a[2],a[3]);
i=2;
while(i<2*n-1){
if(a[i]>a[i+1]){
next = max(next,a[i+1]);
i = 2*i;
} else {
next = max(next,a[i]);
i = 2*(i+1);
}
}
return next;
}

int main()
{
int a[100],n,i;
printf("Enter n: ");
scanf("%d",&n);
printf("\nEnter %d numbers : ",n);
for(i=n;i<2*n;i++)
scanf("%d",&a[i]);
buildTourn(a,n);
printf("\n Max = %d",a[1]);
printf("\n NextMax = %d",nextMax(a,n));
}
