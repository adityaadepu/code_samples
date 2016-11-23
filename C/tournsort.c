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
int minVal(a,n)
int a[],n;
{
int i,min;
min = a[n];
for(i=n+1; i<2*n;i++)
if(a[n]<min)
	min = a[n];
return min;
}
void buildTourn(a,n)
int a[],n;
{
int i;
for(i=2*n-2;i>1;i=i-2)
a[i/2] = max(a[i],a[i+1]);
}

void next(a,n,min)
int a[],n,min;
{
int i;
i=2;
while ( i < 2*n-1)
{
if(a[i]>a[i+1]){
a[i] = min;
i = 2*i;
} else {
a[i+1] = min;
i = 2*(i+1);
}
}
for(i=i/2;i>1;i=i/2)
{
if(i%2==0)
a[i/2] = max(a[i],a[i+1]);
 else 
a[i/2] = max(a[i],a[i-1]);
}
}

int main()
{
int a[100],n,i,min;
printf("Enter n: ");
scanf("%d",&n);
printf("\nEnter %d numbers : ",n);
for(i=n;i<2*n;i++)
scanf("%d",&a[i]);
buildTourn(a,n);
//printf("\n Max = %d",a[1]);
min = minVal(a,n)-1;
printf("\n Sorted values : ");
for(i=1;i<=n;i++){
printf("%d ",a[1]);
next(a,n,min);
}
}
