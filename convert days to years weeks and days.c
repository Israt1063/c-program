#include<stdio.h>
int main(){
    int days,weeks,years;
    printf("enter days:");
    scanf("%d",&days);
    //convert days to years, weeks and days
    years=(days/365);
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));
    printf("%d\n %d\n %d\n",years,weeks,days);
}