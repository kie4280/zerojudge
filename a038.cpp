#include<iostream>

using namespace std;

int main()
{
 string a;
 int count1=0;
 while(cin>>a)
 {
  count1=a.length()-1;
  for(int i=a.length()-1;a[i]=='0' && i>0;i--)
   count1=i-1;
  for(int i=count1;i>=0;i--)
  {
   cout<<a[i];
  }
  cout<<endl;
 }
}
