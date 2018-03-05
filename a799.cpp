#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    long a;
    while(cin>>a)
    {
        if(a<0)
        a=-a;
        cout<<a;

    }

    return 0;
}
