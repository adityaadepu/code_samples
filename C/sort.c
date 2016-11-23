#include<stdio.h>
int main(){

int data[100], i , j , n, temp;
printf("Enter total numbers: ");
scanf("%d",&n);
printf("\n Enter n numbers: ");
for(i = 0; i < n; i++) scanf("%d",&data[i]);

for(i = 0; i<n-1 ; i++)
for(j=i+1; j<n;j++){
	if(data[i]>data[j]){
	temp = data[i];
	data[i] = data[j];
	data[j] = temp;
	}
}
printf("\n");
for(i=0;i<n;i++) printf("%d ",data[i]);
printf("\n");
}
