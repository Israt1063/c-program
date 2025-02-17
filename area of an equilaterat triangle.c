#include<stdio.h>
#include<math.h>//used for sqrt() function
int main(){
    float side,area;
    //input from user
    printf("enter side:");
    scanf("%f",&side);

    //compute the area
    area=(sqrt(3)/4) *(side*side);
    printf("%f\n",area);
}