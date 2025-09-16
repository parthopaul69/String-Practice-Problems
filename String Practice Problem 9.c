/*Write a C program to find out whether a string is pallindrome or not.
Sample Input :
Input String: EYE
Sample Output:
Reverse of the string : EYE
EYE is a pallindrome.*/

#include<stdio.h>
int main()
{
    char str[101];
    printf("Input String: ");
    fgets(str,sizeof(str),stdin);
    int i,len=0,value=0;
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
    }
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            value=1;
            break;
        }
    }
    if(value==0)
    {
        printf("%s is a pallindrome",str);
    }
    else
    {
        printf("%s is not a pallindrome",str);
    }
    return 0;
}
