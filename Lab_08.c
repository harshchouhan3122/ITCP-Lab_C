// Write a program in C to find the length of a string without using library function
#include <stdio.h>
#include <string.h>
int main() 
{
    char A[1000];
    int length=0,i;

    printf("Enter any String:\n");
    gets(A);
    //scanf("%s", A);

    for(i=0;A[i]!='\0';i++)
    {
        length++;
    }
    
    printf("Length of the String is : %d",length);
    return 0;
}