#include<stdio.h>
int main(){
int a,b,c;
//Input two angles of the triangle
printf("enter two angles:");
scanf("%d %d",&a,&b);

//compute the third angle
c=180-(a+b);
printf("%d\n",c);
}