#include<stdio.h>
int main(){
    int num1,num2,num3,min;

    //input from user
    printf("enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);

    //comparing the numbers
    if((num1<num2)&&(num2<num3))
    min=num1;

    else if((num2<num1)&&(num2<num3))
    min=num2;

    else
    min=num3;

    //printing the output
    printf("%d is the minimum\n",min);
}