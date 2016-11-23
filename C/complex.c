#include<stdio.h>
typedef struct
{
int real,imag;
}complex;

void write_complex(complex);
void read_complex(complex *);

complex addition(num1,num2)
complex num1,num2;
{
complex sum;
sum.real = num1.real+num2.real;
sum.imag = num1.imag + num2.imag;

return sum;
}
int main(){
complex number1,number2,sum;
read_complex(&number1);
read_complex(&number2);
sum = addition(number1,number2);
write_complex(sum);
}

void write_complex(num)
complex num;
{
printf("\n %d + i %d",num.real,num.imag);
}

void read_complex(a)
complex *a;
{
printf("Enter complex number real followed imaginary parts: ");
scanf("%d %d",&(a->real),&(a->imag));
}


