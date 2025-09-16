/*Write a C program to take two strings as input. Then concatenate the two strings.
Input:
1st String: Hello
2nd String: World
Output:
Concatenated String: Hello World*/

#include<stdio.h>
int main()
{
    char str1[101],str2[101],str[202];
    printf("1st String: ");
    fgets(str1,sizeof(str1),stdin);
    printf("2nd String: ");
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
        str[i]=str1[i];
    }
    str[i++]=' ';
    for(j=0;str2[j]!=0;j++)
    {
        str[i++]=str2[j];
    }
    str[i]='\0';
    printf("Concatenated String: %s",str);
    return 0;
}
