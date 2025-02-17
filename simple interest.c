#include<stdio.h>
int main(){
    float principle,time,rate,SI;

    //input from user
    printf("enter principle,time,rate:\n");
    scanf("%f%f%f",&principle,&time,&rate);

    //calculate SI
    SI=(principle*time*rate)/100;
    
    // print output
    printf("%f\n",SI);
}