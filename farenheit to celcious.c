#include<stdio.h>
int main(){
    float farenheit ,celcious;
    printf("enter temperature in farenheit:");
    scanf("%f",&farenheit);
    //converting farenheit to celcious
    celcious=(farenheit-32)/1.8;
    printf("%f",celcious);
}