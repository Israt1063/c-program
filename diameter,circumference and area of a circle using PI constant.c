//In C PI is defined in math.h header file with name M_PI
#include<stdio.h>
#include<math.h>//used M_PI
int main()
{
    float radious,diameter,circumference,area;
    printf("enter radious of the circle :");
    scanf("%f",&radious);
    //calculate diameter,circumference and area
    diameter=2*radious;
    circumference=2*M_PI*radious;
    area=2*M_PI*radious;
    printf("%f\n %f\n %f\n",diameter,circumference,area);


}
