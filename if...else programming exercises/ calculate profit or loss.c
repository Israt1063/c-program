#include<stdio.h>
int main(){
    int sp,cp,amt;//sp=selling price,cp=celling price

    //input from user
    printf("enter sp,cp:");
    scanf("%d%d",&sp,&cp);

    //checking condition
    if(sp>cp)
    {
    amt=sp-cp;
    printf("profit=%d\n",amt);
    }

    else if(cp>sp)
    {
    amt=cp-sp;
    printf("loss=%d\n",amt);
    }

    else
    printf("no profit or no loss\n");
}