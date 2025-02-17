#include<stdio.h>
int main(){
    int year;

    //input year
    printf("enter year:");
    scanf("%d",&year);

    //checking the condition
if(((year%4==0)&&(year%100!=0))||(year%400==0))
printf("leap year\n");

else
printf("common year\n");

}