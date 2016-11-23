#include<stdio.h>
void towers(n,from,to,via)
int n;
char from,to,via;
{
if(n==1) printf("<%c,%c> ",from,to);
else
{
towers(n-1,from,via,to);
towers(1,from,to,via);
towers(n-1,via,to,from);
}
}
int main()
{
int n;
printf("Enter number of dics : ");
scanf("%d",&n);
towers(n,'A','B','C');
}
