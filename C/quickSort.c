#include<stdio.h>
void partition(A,i,j,l)
int A[],i,j,*l;
{
int b[100],count,x,m,n,p,o;
x = A[i];
m=i+1;
n=j;
count = 0;
for(p=i+1;p<=j;p++)
{
if(x>=A[p]){
b[m++]=A[p];
count++;
}
else
b[n--]=A[p];
}
*l=i+count;
b[i]=b[i+count];
b[i+count]=x;
printf("\nm = %d , n = %d , l = %d",m,n,*l);
//scanf("%d",&o);
for(p=i;p<=j;p++)
A[p]=b[p];
}

void quickSort(A,i,j)
int A[],i,j;
{
int l;
if(i>=j) return;
else
{
partition(A,i,j,&l);
quickSort(A,i,l-1);
quickSort(A,l+1,j);
}
}

int main()
{
int A[100],n,i;
printf("Give n:");
scanf("%d",&n);
printf("\n Enter n numbers: ");
for(i=0;i<n;i++)
scanf("%d",&A[i]);
quickSort(A,0,n-1);
printf("\n Sorted elements: ");
for(i=0; i<n;i++)
printf("%d ",A[i]);


}
