#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        bool y=true;
        if(b==1)
        {
            y=false;

        }
        if(b==2)
        {
            y=true;
        }
        else
        {

              for(int t=2;t<b;t++)
              {
                  if(b%t==0)
                  {
                      y=false;
                      break;
                  }

              }



        }
        if(y==true)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;

    }
    return 0;
}
