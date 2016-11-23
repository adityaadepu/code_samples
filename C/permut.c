#include<stdio.h>

int main()
{
char LIST[20],PERM[20];
int n,r;
printf("Give n and r: " );
scanf("%d%d", &n,&r);
printf("\n Give the %d characters as a string: ",n);
scanf("%s", LIST);
printf("\n The list is : %s \n",LIST);
permut(LIST,n,r,PERM,0);
//printf("\n PERM = %s",PERM);
}
del_list(L,i,n,NEW)
char L[], NEW[];
int i,n;
{
int j;
for(j=0;j<i;j++) NEW[j]=L[j];
for(j=i;j<n-1;j++) NEW[j]=L[j+1];

}

permut(L,n,r,P,m)
char L[],P[];
int n,r,m;
{
int i;
char NEW[10];
if(r==0)
{
P[m]='\0';
printf(" %s ,",P);
return 0;
} else{
for(i=0;i<n;i++){
P[m]=L[i];
del_list(L,i,n,NEW);
permut(NEW,n-1,r-1,P,m+1);
}
}
}
