#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a;
    string out,output;
    while(cin>>a)
    {
        for(int i=0;;i++)
        {
            if(a==0)
                break;
            if(a%2==1)
            {
               out+="1";
               a=a/2;
            }

            else
            {
               out+="0";
               a=a/2;
            }
        }
        for(int i=out.length()-1;i>=0;i--)
        {
            output+=out[i];
        }
        cout<<output<<endl;
        output="";
        out="";
    }
    return 0;
}
