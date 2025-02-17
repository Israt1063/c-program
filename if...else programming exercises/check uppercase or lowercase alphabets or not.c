#include<stdio.h>
int main(){
    char ch;

    //input character from user
    printf("enter any character:");
    scanf("%c",&ch);

    //checking condition
    if(ch>='a'&&ch<='z')
    printf("character is lowercase alphabet\n");

    else if(ch>='A'&&ch<='Z')
    printf("character is uppercase alphabet\n");

    else
    printf("character is not alphabet\n");
}