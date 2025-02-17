#include<stdio.h>
int main(){
    int phy,chm,bio,math,eng;
    float per;

    //input from user
    printf("enter subject's number:");
    scanf("%d%d%d%d%d",&phy,&chm,&bio,&math,&eng);

    //calculate percentage
    per=(phy+chm+bio+math+eng)/5.0;

    //find grade according to the percentage
    if(per>=90)
    printf("Grade A");

    else if(per>=80)
    printf("Grade B\n");
else if(per>=70)
    printf("Grade C\n");
else if(per>=60)
    printf("Grade D\n");
else if(per>=80)
    printf("Grade E\n");
else 
    printf("Grade F\n");

}