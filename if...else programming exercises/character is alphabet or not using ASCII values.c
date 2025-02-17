#include<stdio.h>
int main(){
    char ch;

    //input from user
    printf("enter any character:");
    scanf("%c",&ch);

    //condition checking
    if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))
    printf("character is Alphabet\n");

    else
    printf("character is not Alphabet\n");
    
}