/*Write a C program to find the number of vowels and consonants present in a string.*/

#include<stdio.h>
int main()
{
    char str[101];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    int i,vowel=0,consonant=0;
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
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }
    printf("Vowels: %d\n",vowel);
    printf("Consonant: %d",consonant);
    return 0;
}
