#include<stdio.h>
#include<math.h>//used for pow()function
int main(){
    float principle,time,rate,CI;

    //input from user
    printf("enter principle,time,rate:");
    scanf("%f%f%f",&principle,&time,&rate);

    //calculate copound interest
    CI=principle*(pow((1+rate/100),time));
    printf("%f",CI);
}