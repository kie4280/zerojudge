#include <iostream>
#include <cstdlib>

using namespace std;

long input = 10;

int main()
{
    long table[input];
    long prime[input];

    long a,b;
    for(long i=0;i<input;i++)
    {
        table[i]=i+1;
    }
    table[0]=0;

    for(long a=2;a<input;a++)
    {

        if(table[a]!=0)
        {
            prime[a]=a+1;
            for(int b=2;b<(a/b);b++)
            {
                table[a]
            }
        }
        for(b=0;b<input;b++)
        {
            table[b]=0;
        }

        cout<<prime[a]<<endl;
    }

























    /*while(cin>>a)
    {
        bool y=true;
        if(a==1)
        {
            y=false;

        }
        if(a==2)
        {
            y=true;
        }
        else
        {

              for(int t=2;t<a;t++)
              {
                  if(a%t==0)
                  {
                      y=false;
                      break;
                  }

              }


s
        }
        if(y==true)
            cout<<"質數"<<endl;
        else
            cout<<"非質數"<<endl;


    }*/
    return 0;
}
