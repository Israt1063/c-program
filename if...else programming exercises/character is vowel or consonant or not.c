#include<stdio.h>
int main(){
    char ch;

    //input character from user
    printf("enter any character:");
    scanf("%c",&ch);

    //checking condition
    if(ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    printf("character is Vowel\n");

    else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    printf("character is consonant\n");

    else
    printf("character is not alphabetn");
}