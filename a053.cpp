#include <iostream>

using namespace std;

int main()
{
 int a,b=0;
 while(cin>>a)
 {
  b=0;
  if(a>40)
  {
   b=100;
   a=0;
  }
  if(a>20 && a<=40)
  {
   b+=(a-20)*1;
   a=20;
  }
  if(a>10 && a<=20)
  {
   b+=(a-10)*2;
   a=10;
  }
  if(a<=10)
  {
   b+=a*6;
   a=0;
  }
  if(a==0)
   cout<<b<<endl;


 }
 return 0;
}
