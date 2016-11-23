#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,r1,r2,y,wa,z;
scanf("%f%f%f",&a,&b,&c);
y = b*b-4*a*c;
wa = 2*a;

if (y==0)
	printf("roots are equal : %f",-b/wa);
else
if (y<0)
	printf("roots are complex");
else
	{
	z = sqrt(y); 
	printf("Two distinct roots \n");
	printf("root1 = %f, root2 = %f", (-b-z)/wa, (-b+z)/wa);
	}
}
