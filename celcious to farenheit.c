#include<stdio.h>
int main(){
    float celcious,farenheit;
    printf("enter temparaturein celcious:");
    scanf("%f",&celcious);
    // converting celcious to farenheit
    farenheit=(celcious*1.8)+32;
    printf("%f",farenheit);
}