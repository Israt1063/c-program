#include<stdio.h>
int main(){
int num1,num2, sum,sub,mul,mod;
float div;
printf("any two numbers:");
scanf("%d %d",&num1,&num2);
// perform all arithmatic operations
sum=num1+num2;
sub=num2-num1;
mul=num1*num2;
div=(float)num1/num2;
mod=num1%num2;
printf("%d\n %d\n %d\n %d\n",sum,sub,mul,mod);
printf("%f\n",div);



return 0;



}