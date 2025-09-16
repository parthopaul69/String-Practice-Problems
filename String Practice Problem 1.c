/*Write a C program to take a string as input. Then print the string along with its length .
Input:
Input String: Hello
Output:
Output String: Hello 5*/

#include<stdio.h>
int main()
{
    char str[101];
    int i,len=0;
    printf("Input String: ");
    fgets(str,sizeof(str),stdin);
    printf("Output String: ");
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
        len++;
        printf("%c",str[i]);
    }
    printf(" %d",len);
    return 0;
}
