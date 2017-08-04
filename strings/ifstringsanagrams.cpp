#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
 
int main()
{
   std::unordered_map <char,int> m1,m2;
   std::string s1,s2;
   cout<<"\nEnter the string 1: \n";
   cin>>s1;
   cout<<"\n\nEnter the string 2: \n";
   cin>>s2;
   int flag=0;
   if(s1.length()!=s2.length())
   {
         cout<<"\n\nStrings are not anagram\n";
   }
   else
   {
         for(int i=0;i<s1.length();i++)
         {
             m1[s1[i]]++;
             m2[s2[i]]++;
         }
         for(int i=0;i<s1.length();i++)
         {
                if(m1[s1[i]]!=m2[s1[i]])
                {
                      flag=1;
                      break;
                }
         }
         if(flag==1)
         {
                 cout<<"\n\nStrings are not anagram\n";
         }
         else
         {
              cout<<"\n\nStrings are anagram\n";
         }
   }
      return 0;
 
}