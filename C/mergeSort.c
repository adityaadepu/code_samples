#include<stdio.h>
void merge(A,i,j)
int A[],i,j;
{
int b[100],mid,k,l,m,o;
mid=(i+j)/2;
k=i; 
l=mid+1;
m=i;
while(k<=mid&&l<=j){
if(A[k]>A[l]){
b[m++] = A[l++];
} else{
b[m++] = A[k++];
}
}
if(k>mid)
while(l<=j)
b[m++]=A[l++];

else if(l>j)
while(k<=mid)
b[m++]=A[k++];

for(o=0;o<=j;o++)
A[o]=b[o];

}

void mergeSort(A,i,j)
int A[],i,j;
{
int mid;
if(i>=j) return;
else
{
mid=(i+j)/2;
mergeSort(A,i,mid);
mergeSort(A,mid+1,j);
merge(A,i,j);
}
}

int main()
{
int i,n, A[100];
printf("Give n:");
scanf("%d",&n);
printf("\n Enter n numbers: ");
for(i=0;i<n;i++)
scanf("%d",&A[i]);
mergeSort(A,0,n-1);
printf("\n Elements after merge sort: ");
for(i=0;i<n;i++)
printf("%d ",A[i]);


}
