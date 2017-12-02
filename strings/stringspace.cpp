#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
	 int t;
	 cin>>t;
	 for(int i=0;i<t;i++)
	 {
	 	  int n;
	 	  cin>>n;
	 	  std::string s[n];
	 	  for(int j=0;j<n;j++)
	 	  {
	 	  	  cin>>s[j];
	 	  }
	 	  std::string s2="";
	 	  s2.append(s[0]);
	 	  for(int j=0;j<n-1;j++)
	 	  {
	 	  	     if(s[j][s[j].size()-1]==s[j+1][0])
	 	  	     {
                    s2.append(s[j+1]);
	 	  	     }
	 	  }
	 	  cout<<s2.size();
	 	  cout<<"\n";
	 }
	 return 0;
}