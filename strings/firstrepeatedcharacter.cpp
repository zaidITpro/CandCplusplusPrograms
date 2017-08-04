#include <stdio.h>
#include <string.h>
#include <unordered_map>
using namespace std;
 
int main()
{
   std::unordered_map <char,int> m;
   char string[100];
   printf("\n\nEnter the string: \n");
   scanf("%s",string);
   int flag=0;
   char c;
   for(int i=0;i<strlen(string);i++)
   {
         m[string[i]]++;
         if(m[string[i]]>1)
         {
             flag=1;
             c=string[i];
             break;
         }
   }
   if(flag==0)
   {
         printf("\nNo repetation");
   }
   else
   {
         printf("\n\nFirst Repeating character is: %c",c);
   }
      return 0;
}