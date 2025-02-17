#include<stdio.h>
int main(){
    int month;

    //input month number from user
    printf("enter month number from(1-12):");
    scanf("%d",&month);

    //condition for 31 days
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
printf("31 days\n");

else if(month==4||month==6||month==9||month==11)
printf("30 days\n");

else if(month==2)
printf("28 or 29 days\n");

else
printf("Invalid Input!please enter value from (1-12):\n");

}