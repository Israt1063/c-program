#include<stdio.h>
int main(){
    int angle1,angle2,angle3,sum;

    //input angle from user 
    printf("enter three angles :");
    scanf("%d%d%d",&angle1,&angle2,&angle3);

    //calculate sum of angles
    sum=angle1+angle2+angle3;

    if(sum==180&&angle1>0&&angle2>0&&angle3>0)
    printf("Triangle is valid\n");
    else
    printf("Triangle is not valid\n");

}