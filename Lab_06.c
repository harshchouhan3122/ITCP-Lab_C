//1D Array
//Write a program using 1D Array to get an average of the marks scored by a class in a Subject.
#include <stdio.h>

int main()
{
    int i,n;
    float avg,sum=0;
    printf("Total Number of students in a class:") ;
    scanf("%d",&n);
    float marks[n];
    printf("Enter the marks of the students:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&marks[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];
    }
    
    avg=sum/n;
    printf("\nAverage Marks Scored by the class are: %.2f",avg);

    return 0;
}