#include<stdio.h>
int main(){
    char ch;

    //input from user
    printf("enter a character:");
    scanf("%c",&ch);

    //condition checking
    if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
    printf("character is Alphabet\n");

    else
    printf("character is not Alphabet\n");

}