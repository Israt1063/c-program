#include<stdio.h>
int main(){
int num1,num2,num3,max;

//input from user
printf("enter three numbers:");
scanf("%d%d%d",&num1,&num2,&num3);

//comparing the numbers
if((num1>num2)&&(num1>num3))
max=num1;

else if((num2>num1)&&(num2>num3))
max=num2;

else
max=num3;

//printing the output
printf("%d is the maximum\n",max);

}