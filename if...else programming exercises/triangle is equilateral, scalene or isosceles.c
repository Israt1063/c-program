#include<stdio.h>
int main(){
    int side1,side2,side3;

    //input sides from user
    printf("enter three sides:");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2&&side1==side3&&side2==side3)
    printf("Triangle is Equilateral\n");

    else if(side1==side2||side1==side3||side2==side3)
    printf("Triangle is Scalene\n");

    else
    printf("Triangle is Isoscalene\n");
}