#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
 int a[100]= {0};
 int b=0,count1=0;
 double d=0;
 string c;

 while(getline(cin,c))
 {
  count1=0;
  d=0;
  for(int i=0; i<c.length(); i++)
  {
   while(isdigit(c[i]))
   {
    b*=10;
    b+=c[i]-'0';
    i++;
   }
   a[count1]=b;
   count1++;
   b=0;

  }
  for(int i=1;i<count1;i++)
  {
   d+=a[i];
  }
  cout<<(d/a[0]>59 ? "no":"yes")<<"\n";

 }
}
