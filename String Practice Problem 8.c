/*Write a C program to find out if a string is a substring of another string or not.
Input :
Input String1: Hello World
Input String2: orl
Output:
orl is a substring of Hello World*/

#include<stdio.h>
int main()
{
    char str1[101],str2[101];
    printf("Input String1: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Input String2: ");
    fgets(str2,sizeof(str2),stdin);
    int i,j,value=0;
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]=='\n')
        {
            str1[i]='\0';
            break;
        }
    }
    for(i=0;str2[i]!='\0';i++)
    {
        if(str2[i]=='\n')
        {
            str2[i]='\0';
            break;
        }
    }
    for(i=0;str1[i]!='\0';i++)
    {
        for(j=0;str2[j]!='\0';j++)
        {
            if(str1[i+j]!=str2[j])
            {
                break;
            }
        }
        if(str2[j]=='\0')
            {
                value++;
                break;
            }
    }
    if(value==1)
    {
        printf("%s is a substring of %s",str2,str1);
    }
    else
    {
        printf("%s is not a substring of %s",str2,str1);
    }
    return 0;
}
