#include<stdio.h>
int main(){
    int week;

    //input week number from user
    printf("enter week number (1-7):");
    scanf("%d",&week);

    //condition checking
    if(week==1)
    printf("Saturday\n");//assume this week as first week

else if(week==2)
    printf("Sunday\n");
else if(week==3)
    printf("Monday\n");
else if(week==4)
    printf("Tuesday\n");
else if(week==5)
    printf("Wednesday\n");
else if(week==6)
    printf("Thursday\n");
else if(week==7)
    printf("Friday\n");

    else
    printf("Invalid input\n");
 
    
}