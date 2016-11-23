#include<stdio.h>

int main(){
int a[10][10], b[10][10], c[10][10];
int i,j,k,m,n,o;

printf("Enter dimentions: ");
scanf("%d%d%d",&m,&n,&o);

printf("\n Enter first matrix of %d X %d \n",m,n);

for(int i=0; i<m; i++)
for(int j=0; j<n; j++)
scanf("%d",&a[i][j]);

printf("\n Enter first matrix of %d X %d \n",n,o);

for(int i=0; i<n; i++)
for(int j=0; j<o; j++)
scanf("%d",&b[i][j]);

for(int i=0; i<m; i++)
for(int j=0; j<o; j++)
for(int k=0; k<n; k++)
c[i][j] = c[i][j]+a[i][k]*b[k][j];


printf("Matrix multiplication result : \n");
for(int i=0; i<m; i++){
printf("\n");
for(int j=0; j<o; j++)
printf("%d ",c[i][j]);
}

}
