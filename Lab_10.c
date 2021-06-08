//FILES
//Write a C program to copy one file into another file.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fs, *ft;   //file source , file target
    char ch;
    clscr();

    fs=fopen("file1.txt","r");
    if (fs==NULL)
    {
        printf("\n Can't Open File");
        exit(0);
    }

    ft=fopen ("file2.txt","w");
    if(ft==NULL);
    {
        printf("\n Can't Open File");
        exit(0);
    }
    while(1)
    {
        ch=fgetc(fs);
        if (ch==EOF)
            break;
        else
        fputc(ch,ft);
    }

    fclose (fs);
    fclose (ft);
    printf("\nFile Copied Successfully!");
    getch();

    return 0;
}