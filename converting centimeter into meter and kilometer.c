#include<stdio.h>
int main()
{


float cm,meter,km;
printf("enter lenth in centimeter:");
scanf("%f",&cm);
//converting cm into meter and km
meter=cm/100.0;
km=cm/1000.0;
printf("%f\n %f\n",meter,km);
}