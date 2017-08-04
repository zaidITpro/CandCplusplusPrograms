#include <stdio.h>
#include <string.h>
int main()
{
    char string[100],result;
    int count[256]={0},i,count1;
 
    printf("\nEnter the string:  ");
    scanf("%s",string);
 
    for(i=0;i<strlen(string);i++)
    {
          count[string[i]]++;
    }
 
    printf("\nThe frequency of characters are: \n");
    for(i=0;i<strlen(string);i++)
    {
          result=string[i];
          printf("\n%c  %d",result,count[string[i]]);
    }
    printf("\n");
    return 0;
}