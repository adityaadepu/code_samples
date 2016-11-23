#include<stdio.h>
int main(){
int n, max, number, i;
printf("Enter total numbers: ");
scanf("%d", &n);
printf("\n");
if(n>0){
scanf("%d",&number);
max = number;
for(int i=1; i< n ; i++){
scanf("%d",&number);
if(max < number)
	max = number;

}
printf("%d", max);
}
}
