#include <iostream>
#include <unordered_map>
#include <stdio.h>
#include <string>
using namespace std;
 
int main()
{
    std::string s1;
    std::string s2;
    std::unordered_map <char,int> m1;
    std::unordered_map <char,int> m2;
     
    /* input string 1*/
     
    getline(cin,s1);
    for(int i=0;i<s1.length();i++)
    {
        m1[s1[i]]++;
    }
     
    /*input string 2*/
     
    getline(cin,s2);
    for(int i=0;i<s2.length();i++)
    {
        m2[s2[i]]++;
    }
    int flag=0;
     
    /*Compairing length of both strings */
     
    if(s1.length()!=s2.length())
    {
        flag=1;
    }
    else
    {
        /*checking occurrences of each character */
         
        for(int i=0;i<s2.length();i++)
        {
              char c=s1[i];  
              if(m1[c]!=m2[c])
              {
                  flag=1;
                  break;
              }
        }
    }
    if(flag==1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
     
}