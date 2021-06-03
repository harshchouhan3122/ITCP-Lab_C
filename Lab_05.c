//Function
/*
//Write a function which accepts a number & Check Whether a Number is Prime or not. 

#include <stdio.h>
int is_prime();
void main(){
    int num,ans;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    ans=is_prime(num);
    if (ans==1)
        printf("It is a prime Number\n");
    else
        printf("It is not a Prime Number\n");
    // printf("%d\n",ans);

}

//Function decleration
int is_prime(int n)
{
    int i;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }

    if(i==n)
        return 1;
    else
        return 0;
}
*/

//Recursion
// /*
// Write a C Program to find out the  Factorial of a Number Using Recursion.

#include <stdio.h>
unsigned long int fact();
void main(){
    int num,factorial;
    printf("Enter any number : ");
    scanf("%d",&num);   
    factorial=fact(num);        //Only upto 33
    printf("Factorial of %d = %lu\n",num,factorial);
}

unsigned long int fact(int n){
    if (n==0)
        return 1;
    else if (n==1)
        return 1;
    else
         return n*fact(n-1);
}
// */