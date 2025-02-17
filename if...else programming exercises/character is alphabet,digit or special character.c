#include<stdio.h>
int main(){
    char ch;

    //input character from user
    printf("enter any character:");
    scanf("%c",&ch);

    //checking condition
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    printf("character is Alphabet\n");

    else if(ch>='0'&&ch<='9')
    printf("character is Digit\n");

    else
    printf("charater is Special character\n");
}