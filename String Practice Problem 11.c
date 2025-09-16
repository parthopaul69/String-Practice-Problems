/*Write a C program to search for a character in a string.
Sample Input:
Enter String: Hello World
Enter character to search : W

Sample Output:
W is present in the string.*/

#include<stdio.h>
int main()
{
    char str[101],a;
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter character to search: ");
    scanf("%c",&a);
    int i,value=0;
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
        if(str[i]==a)
        {
            value=1;
        }
    }
    if(value==1)
    {
        printf("%c is present in the string",a);
    }
    else
    {
        printf("%c is not present in the string",a);
    }
    return 0;
}
