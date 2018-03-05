#include <chrono>
#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
 std::chrono::_V2::high_resolution_clock::time_point timer1=std::chrono::high_resolution_clock::now();
 int speed=60;
 bool a=true;

 while(true)
 {
  double i=std::chrono::duration<double,ratio<1,1000>>(std::chrono::high_resolution_clock::now()-timer1).count();

  cout<<i<<"  "<<60/speed<<endl;
  Sleep(60/speed*1000-i);
  timer1=std::chrono::high_resolution_clock::now();

  cout<<(a ? "tick" : "tock")<<endl;
  if(a==true)
   a=false;
  else
   a=true;


 }
 return 0;
}
