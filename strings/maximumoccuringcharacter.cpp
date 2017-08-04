#include <iostream>
#include <unordered_map>
#include <stdio.h>
#include <string.h>
using namespace std;
 
int main()
{
      std::string s;
      getline(cin,s);  /*taking input */
      std::unordered_map <char,int> m;
      for(int i=0;i<s.length();i++)
      {
           m[s[i]]++;
      }
      int max;
      char c;
      max=m[s[0]];
      c=s[0];
      for(int i=1;i<s.length();i++)
      {
           if(m[s[i]]>=max)
           {
               if(m[s[i]]==max)
               {
                     if(s[i]<c)
                     {
                          c=s[i];
                     }
               }
               else
               {
                    max=m[s[i]];
                    c=s[i];
               }
           }
      }
      printf("%c %d",c,max);
      return 0;
}