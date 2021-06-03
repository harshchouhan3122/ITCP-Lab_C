//Write a C program to print following type of pyramid pattern: 
/*             *         1
              * *        2     
             * * *       3
            * * * *      4
           * * * * *     5
*/

#include <stdio.h> 
void main()
{
    int n,i,j,k;

    printf("Enter the number of Rows : ");  
    scanf("%d",&n);

// /*
//By using for loop
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)     //Spaces printing
            printf(" ");

        for(k=1;k<=i;k++)       //Star printing
            printf("* ");

        printf("\n");
    }
// */

/*
//By using While loop
    i=1;
    while(i<=n)
    {
        j=1;
	       while(j<=n-i)
            {
                printf(" ");
                j++;
            }
	    k=1;
            while(k<=i)
            {
                printf("* ");
                k++;
            }
        printf("\n");
        i++;
    } 
*/

/*
//By using do while loop
    i=1;
    do
    {
	    j=1;
        do
        {
            // if(i==n)
            //     break;
            printf(" ");
            j++;
        } while(j<=n-i);

        k=1;
        do
        {
            printf("* ");
            k++;
        } while(k<=i);

    printf("\n");
    i++;
    } while(i<=n);

*/
}