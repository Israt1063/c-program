#include<stdio.h>
int main()
{

int lenth,breadth,area,perimeter;
printf("Enter lenth of the rectangle:");
printf("Enter breadth of the rectangle:");
scanf("%d %d",&lenth,&breadth);
//calculate area & perimeter 
area=lenth*breadth;
perimeter=2*(lenth+breadth);

printf("%d\n %d\n",area,perimeter);


return 0;

}