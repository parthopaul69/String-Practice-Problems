/*Write a C program that will check whether two strings are the same or not.
Input:
1st String: Hello
2nd String: World
Output:
Hello and World are not the same.*/

#include<stdio.h>
int main()
{
    char str1[101],str2[101];
    printf("1st String: ");
    fgets(str1,sizeof(str1),stdin);
    printf("2nd String: ");
    fgets(str2,sizeof(str2),stdin);
    int i,value=0;
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
    for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            value=1;
            break;
        }
    }
    if(value==0)
    {
        printf("%s and %s are same",str1,str2);
    }
    else
    {
        printf("%s and %s are not the same",str1,str2);
    }
    return 0;
}
