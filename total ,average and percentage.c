#include<stdio.h>
int main(){
    float phy,chem,math,eng,bang,total,average,percentage;
    
    //Input marks of all five subjects
    printf("enter marks of all five subjects:\n");
    scanf("%f %f %f %f %f",&phy,&chem,&math,&eng,&bang);

    //calculate total,average and percentage
    total=phy+chem+math+eng+bang;
    average=total/5;
    percentage=(total/500)*100;

    //print of all results
    printf("%f\n %f\n %f\n",total,average,percentage);

}