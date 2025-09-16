/*Write a program in C that will  reverse a string.
Input :
Input String: Hello
Output:
Output String: olleH */

#include<stdio.h>
int main()
{
    char str1[101],str2[101];
    printf("Input String: ");
    fgets(str1,sizeof(str1),stdin);
    int i,len=0;
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]=='\n')
        {
            str1[i]='\0';
            break;
        }
    }
    for(i=0;str1[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        str2[i]=str1[len-i-1];
    }
    str2[len]='\0';
    printf("Output String: %s",str2);
    return 0;
}
