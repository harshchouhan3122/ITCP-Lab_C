//Arithematic Operator
// /*
//Write a C program of simple calculator using arithematics operators
#include <stdio.h>
int main()
{
    int ch;
    float num1,num2,ans;

    printf("Select which operation you want to perform:\n1.Addition (a+b)\n2.Substraction (a-b)\n3.Multiplications (a*b)\n4.Divison (a/b)\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    printf("Now Enter any two numbers......\n");
    printf("Enter first number : ");    
    scanf("%f",&num1);
    printf("Enter second number : ");
    scanf("%f",&num2);
    if(ch==1 || ch==2 ||ch==3 || ch==4)
    {
        if(ch==1)
            ans=num1+num2;
        else if(ch==2)
            ans=num1-num2;
        else if(ch==3)
            ans=num1*num2;
        else if(ch==4)
            ans=num1/num2;
        printf("Answer = %.2f",ans);
    }
    else
        printf("Enter valid choice !");

    return 0;
} 
// */

//Conditional Operators
/*
//Write C program using conditional operators to display maximum number if any three number are inputted.
#include <stdio.h>
int main() {

    int num1,num2,num3,greater;

    printf("Enter any three numbers.......\n");
    printf("Enter first number:\n");
    scanf("%d",&num1);
    printf("Enter Second number:\n");
    scanf("%d",&num2);
    printf("Enter third number:\n");
    scanf("%d",&num3);

    greater=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);

    printf("Greatest number is : %d\n",greater);
    return 0;
}
*/