#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 int a=0,b=0,c=0;
 long output=0;
 cin>>c;
 for(int i=0;i<c;i++)
 {
  output=0;
  cin>>a>>b;
  for(int d=1;d*d<=b;d++)
  {
   output+=d*d;
  }
  for(int d=1;d*d<a;d++)
  {
   output-=d*d;
  }
  cout<<"Case "<<i+1<<": "<<output<<"\n";
 }
 return 0;
}
