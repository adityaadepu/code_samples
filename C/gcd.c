#include<stdio.h>
int gcd(i,j)
int i,j;
{
int temp;
if(i<j){
temp = i;
i = j;
j = temp;
}
while(i%j!=0){
temp = i %j;
i = j;
j= temp;
}
return j;
}
int main(){
int n1, n2, n3;
printf("Enter two numbers: ");
scanf("%d%d",&n1,&n2);
n3 = gcd(n1,n2);
printf("GCD of the numbers: %d",n3);
}
