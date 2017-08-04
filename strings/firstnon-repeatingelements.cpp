#include <iostream>
#include <map>
#include <string.h>
using namespace std;
 
int main() 
{
  
  
       char string[100];
       int arr[256]={0};
        
          cout<<"\n\nEnter the String:\n\n";
       cin>>string;
       for(int j=0;j<strlen(string);j++)
       {
            arr[string[j]]++;
       }
       char c;
       for(int j=0;j<strlen(string);j++)
       {
            if(arr[string[j]]==1)
            {
                c=string[j];
                break;
            }
       }
       cout<<"\n\n";
       cout<<c<<"\n\n";
 
        
       return 0;
}