#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    int a;
    int b[5];
    int c=0,d=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        c=0;
        d=0;
        for(int i=0;i<4;i++)
        {
            cin>>b[i];
        }
        for(int i=1;i<3;i++)
        {
            if(b[i]%b[i-1]==b[i+1]%b[i])
            {
                c++;
            }

           if(b[i]-b[i-1]==b[i+1]-b[i])
           {
               d++;
           }
        }
        if(c==2)
        {
            b[4]=b[3]*(b[3]/b[2]);
        }
        if(d==2)
        {
            b[4]=b[3]+(b[3]-b[2]);
        }

        for(int i=0;i<5;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
