#include<stdio.h>
int main(){
    int num;
    
    //input from user
    printf("enter a number:");
    scanf("%d",&num);

    //checking the condition
    if(num%2==0)
    printf("number is Even\n");

    else
    printf("number is Odd\n");
}