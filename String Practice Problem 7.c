/*Write a C program to find the frequency of each character present in a string.
Input :
Input String: hello
Output:
e appears 2 time(s).
h appears 1 time(s).
l appears 2 times(s).
o appears 1 time(s).*/

#include<stdio.h>
int main()
{
    char str[101];
    printf("Input String: ");
    fgets(str,sizeof(str),stdin);
    int i,freq[1000]={0},value[1000]={0};
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
        freq[(unsigned char)str[i]]++;
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(value[(unsigned char)str[i]]==0)
        {
            printf("%c appears %d time(s)\n",str[i],freq[(unsigned char)str[i]]);
            value[(unsigned char)str[i]]=1;
        }
    }
    return 0;
}
