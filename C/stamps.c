#include<stdio.h>
#include<stdlib.h>
void sort(int *a, int l){
int i,j,temp;
for(i=0;i<l-1;i++)
for(j=i;j<l;j++)
{
if(*(a+j)>*(a+i)){
temp = *(a+i);
*(a+i) = *(a+j);
*(a+j) = temp;
}
}
}
void printArray(int *a,int l){
int i;
printf("\n");
for(i=0; i<l; i++)
printf("%d ", *(a+i));
printf("\n");
}

int getStamps(int *a,int l, int *b, int ll, int value){
int i=0,k;
for(i=0; i<l;i++){
if(value == *(a+i)){
*(b+ll) = value;
ll = ll+1;
printf(" \n inside equals ll = %d, value = %d", ll, value);
return ll;
}else if(*(a+i)<value){
printf(" \n inside less than ll = %d, value = %d", ll, value);
*(b+ll)=*(a+i);
ll = ll+1;
k = getStamps(a,l,b,ll,value-*(a+i));
if(k==-1){
ll = ll-1;
continue;
} else {
ll = k;
return ll;
}
}
}
printf(" \n outside less than ll = %d, value = %d", ll, value);
 return -1;

}
int main(){
int i,n,*a,*b,l,ll,value;
printf("\n enter N for the list : ");
scanf("%d",&n);
a = (int *)malloc(n*sizeof(int));
printf("\n Enter %d numbers : ",n);
//read array

for(i=0;i<n;i++)
scanf("%d",(a+i));
l = n;
printArray(a,l);
//Read value
printf("\n Enter value : ");
scanf("%d",&value);
//Sort array
sort(a,l);
printf("\nSorted Array");
printArray(a,l);
//Allocate result array b = value/smallest element in l.
ll = 0;
b = (int *)malloc(2*l*sizeof(int));
//call get stamps
ll = getStamps(a,l,b,ll,value);
//traverse result array
printf("\n Stemps which make up the value: ");
printArray(b,ll);
}


