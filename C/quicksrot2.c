#include<stdio.h>
int partition(int pivot, int n, int a[]){

int i,j,k,l,temp,x;

x = a[pivot];
i=0;
j=n-1;
while(i<pivot&&j>pivot){
while(a[i]<x)i++ 
while(a[j]>x) j--;
temp = a[i];
a[i] = a[j];
a[j] = temp;
}

}



2 4 9 5 3 7 1

5
