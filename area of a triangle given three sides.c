#include<stdio.h>
#include<math.h>//used for sqrt() function
int main(){
float a,b,c,s,area;
//input from user
printf("ENTER a b c:");
scanf("%f%f%f",&a,&b,&c);

//calculate area
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%f",area);

}