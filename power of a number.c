#include<stdio.h>
#include<math.h>//used for pow() function
int main(){
    double base,expo,result;
    //Input from user
    printf("enter base and expo:");
    scanf("%lf %lf",&base,&expo);
    //calculation
result=pow(base,expo);
printf("%lf ",result);
}