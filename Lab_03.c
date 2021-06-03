//Conditional statement execute when condition is true
//Unconditional statement executes when condition is false


// /*
// Write a C program to input any number and find the how many digits and also find the factorial of highest digit.

#include <stdio.h>
int main()
{
    int num,count=0,d,max=0,fact=1,i;

    printf("\nEnter any Number: ");
    scanf("%d",&num);
    
    if (num>0)                                               
    {
        while(num!=0)                                        //Conditional Statements
        {
            d=num%10;
            if(d>max)
                max=d;
            count++;
            num=num/10;
        }
        for(i=max;i>=1;i--)
        {
            fact=fact*i;
        }
        printf("Entered Number is a %d digit number.\n",count);
        printf("Factorial of the greatest digit (%d) of this Number is %d.\n",max,fact);
    }
    else 
        printf("Enetr any positive integer!");               //Unconditional Statements
    
    return 0;
}
// */



/*
// Write a Menu Driven C program using Switch Case to perform the following operations on a four digit positive integer number entered by the user.
// 1. To display the number in reverse order.
// 2. To display sum of the digits of the number.
// 3. To display a number by adding one in each digit.
// 4. Exit.

#include <stdio.h>
#include<stdlib.h>
int main(){

    int num,d1,d2,d3,d4,sum=0,rev=0,new_num=0;
    int ch;

    while(1){

    printf("\nSelect which operation you want to perform:\n1.To display ther number in reverse order\n2.To display sum of the digits of the number\n3.To display a number by adding one in each digit\n4.EXIT\n");
    scanf("%d",&ch);
    printf("\nEnter a four digit no. :\n");
    scanf("%d",&num);
    d4=num%10;
    num=num/10;
    d3=num%10;
    num=num/10;
    d2=num%10;
    d1=num/10;
    
    switch (ch){
        case 1 :
                rev=d4*1000+d3*100+d2*10+d1;
                printf("Reverse of the Entered no. is %d\n",rev);
                break;
        case 2 :
                sum=d1+d2+d3+d4;
                printf("Sum of the digits of the no. is %d\n",sum);
                break;
        case 3 :
                new_num=(d1+1)*1000+(d2+1)*100+(d3+1)*10+(d4+1);
                printf("New Number by adding one in each digit is %d\n",new_num);
                break;
        case 4 : 
                exit(0); 
                // break;
                
        default: printf("\n Enter Correct Choice !");
        }
    }
    return 0;
}
// */



/*
// Write a program which accepts any year as input and check whether entered year is leap year or not and display the appropriate message.
#include<stdio.h>
int main () {
    int year;
    printf("Enter year : ");
    scanf("%d",&year);

    if (year%100==0)                            //Conditional statement
    {
        if (year%400==0)
            printf("YES,%d is a leap year.",year);
        else
            printf("NO,%d is not a leap year.",year);
    }
    else                                        //Unconditional Statement
    {
         if (year%4==0)
            printf("YES,%d is a leap year.",year);
        else
            printf("NO,%d is not a leap year.",year);
    }

    return 0;
}
*/

