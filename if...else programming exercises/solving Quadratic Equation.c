#include<stdio.h>
#include<math.h>
int main(){

    float a,b,c;
    float root1,root2,imaginary;
    float discriminant;

    //input from user
    printf("enter number a,b,c:");
    scanf("%f%f%f",&a,&b,&c);

    //find discriminant of the equation
    discriminant=(b*b)-(4*a*c);

    //find the nature of discriminant
    if(discriminant>0)
    {
    root1=(-b+sqrt(discriminant))/(2*a);
    root2=(-b-sqrt(discriminant))/(2*a);
    printf("%f\n%f\n",root1,root2);
    }
    
    else if(discriminant==0)
    {
    root1=root2=-b/(2*a);
    printf("%fand%f",root1,root2);
    }
    
    else if(discriminant<0){
    root1=root2=-b/(2*a);
    imaginary=sqrt(-discriminant)/(2*a);
    printf("%f+i%f and %f-i%f",root1,imaginary,root2,imaginary);}
    

}