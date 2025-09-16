/*Write a C program to find out how many words are present in a string.
Input :
Input String: Hello World
Output:
There are 2 words.*/

#include<stdio.h>
int main()
{
    char str[101];
    printf("Input String: ");
    fgets(str,sizeof(str),stdin);
    int i,value=1;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='\n')
        {
            str[i]='\0';
            break;
        }
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            value++;
        }
    }
    if(value==1)
    {
        printf("There is %d Word",value);
    }
    else
    {
        printf("There are %d Words",value);
    }
    return 0;
}
