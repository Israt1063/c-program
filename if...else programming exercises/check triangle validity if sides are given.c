#include<stdio.h>
int main(){
    int side1,side2,side3;

    //input sides from user
    printf("enter three sides:");
    scanf("%d%d%d",&side1,&side2,&side3);

    //checking condition
    if((side1+side2>side3&&side1+side3>side3&&side2+side3>side1))
    printf("Triangle is valid\n");

    else
    printf("Triangle is not valid\n");
}