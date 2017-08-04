#include <iostream>
using namespace std;
 
int main() {
  int t;    /*t is the test cases */
  cin>>t;
  for(int i=0;i<t;i++)
  {
       int n;    /*n is the number of elements */
       cin>>n;
       int arr[n];
       for(int j=0;j<n;j++)
       {
            cin>>arr[j];
       }
       int temp;
       int j=0;
       int k=n-1;
       while(j<k)
       {
           temp=arr[j];
           arr[j]=arr[k];
           arr[k]=temp;
           j++;
           k--;
       }
       cout<<"\n\nArray after reversal is: \n\n";
       for(j=0;j<n;j++)
       {
           cout<<arr[j]<<" ";
       }
       cout<<"\n\n";
  }
  return 0;
}