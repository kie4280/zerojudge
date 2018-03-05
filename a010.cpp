#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a;

    int count1=0;
    while(cin>>a)
    {

        for(int i=2;i<=a;i++)
        {
            if(a%i==0)
            {

                for(int b=1;;b++)
                {

                    if(a%i!=0)
                    {
                        break;
                    }
                    a=a/i;
                    count1++;
                    //cout<<count1<<"    "<<a<<endl;;

                }
                if(a==1)
            {
                if(count1!=0 && count1!=1)
                cout<<i<<"^"<<count1<<endl;
                else if(count1==1)
                    cout<<i<<endl;
            }
            else
            {
                if(count1!=0 && count1!=1)
                cout<<i<<"^"<<count1<<" * ";
                else if(count1==1)
                    cout<<i<<" * ";

            }

            }



            count1=0;
        }

    }
    return 0;
}
