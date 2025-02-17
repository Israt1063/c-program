#include<stdio.h>
int main(){
    int num1,num2,max;

    //input from user
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);

//comparing numbers
    if(num1>num2)
    max=num1;

    else
    max=num2;

// printing output
    printf("%d is the maximum\n",max);
    
}