#include<iostream>
#include<cmath>

using namespace std;

int main()
{
 double a,b,c,d;

 bool none=true;

 while(cin>>a>>b)
 {
  none=true;

  for(int i=a;a<=b;a++)
  {
   c=0;
   i=a;
   d=(int)log10(i)+1;
   for(int z=1;pow(10,z-1)<=a;z++)
   {
    c+=pow(i%10,d);
    i-=i%10;
    i/=10;

   }

  if(c==a)
  {
   cout<<a<<" ";
   none=false;
  }

 }
 cout<<endl;
 if(none==true)
  cout<<"none"<<endl;
 }
 return 0;
}
