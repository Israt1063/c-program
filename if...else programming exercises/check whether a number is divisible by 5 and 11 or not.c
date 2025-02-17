#include<stdio.h>
int main(){
    int num;
    //input from user
    printf("enter a number:");
    scanf("%d",&num);

    //checking the condition
    if((num%5==0)&&(num%11==0))
    printf("number is divisible by 5 and 11\n");

    else
    printf("number is not divisible by 5 and 11\n");
}