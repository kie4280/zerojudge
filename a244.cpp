#include<iostream>
using namespace std;

int main()
{
 long long a,b,c,d;
 while(cin>>a)
 {
  for(int i=0; i<a; i++)
  {
   cin>>b>>c>>d;
   switch (b)
  {
   case 1:
    cout<<c+d<<endl;
    break;
   case 2:
    cout<<c-d<<endl;
    break;
   case 3:
    cout<<c*d<<endl;
    break;
   case 4:
    cout<<c/d<<endl;
    break;

  }
 }
}
return 0;
}
