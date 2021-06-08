//Structure
/*
Define a structure called cricket that will describe the following information:
player name,team name, batting average.
Using cricket,declare an array player with input (no.of players) elements
and write a program to read the information about all
the no. of  players (input) and print a team-wise list containing
names of player with their batting average.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct cricket
{
    char pname[20];
    char tname[20];
    float batavg;
};

int main()
{
    
    struct cricket s[20],temp;
    int i,j,n;
    float batavg;
    printf("Total Number of players:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   
        printf("Enter Details in the following form :\n1.Player Name\n2.Team Name\n3.Batting Average\n");
        scanf("%s %s %f",&s[i].pname,&s[i].tname,&s[i].batavg);
        //s[i].bavg=p;
    }

    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(strcmp(s[j-1].tname,s[j].tname)>0)
            {
                temp=s[j-1];
                s[j-1]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("Player Name         Team Name           Batting Avg.\n");
    for(i=0;i<n;i++)
    {
        printf("%-20s %-20s %.2f\n",s[i].pname,s[i].tname,s[i].batavg);
    }
    return 0;
}