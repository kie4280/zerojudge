#include<iostream>
#include<cstdlib>



using namespace std;


int main()
{
    string a;

    int number1=0,number2=0,number3=0;



    while(cin>>a)
    {
        if(a[0]-'A'<=7)
        number1=a[0]-'A'+10;
        switch (a[0])
        {
            case 'I':
            number1=34;
            break;
            case 'J':
            number1=18;
            break;
            case 'K':
            number1=19;
            break;
            case 'L':
            number1=20;
            break;
            case 'M':
            number1=21;
            break;
            case 'N':
            number1=22;
            break;
            case 'O':
            number1=35;
            break;
            case 'P':
            number1=23;
            break;
            case 'Q':
            number1=24;
            break;
            case 'R':
            number1=25;
            break;
            case 'S':
            number1=26;
            break;
            case 'T':
            number1=27;
            break;
            case 'U':
            number1=28;
            break;
            case 'V':
            number1=29;
            break;
            case 'W':
            number1=32;
            break;
            case 'X':
            number1=30;
            break;
            case 'Y':
            number1=31;
            break;
            case 'Z':
            number1=33;
            break;


        }
        number2=number1/10+number1%10*9;


        for(int i=1;i<a.length();i++)
        {
            number3+=(a[i]-'0')*(9-i);


        }

        if((number3+number2+a[9]-'0')%10==0)
            cout<<"real"<<endl;
        else
            cout<<"fake"<<endl;
        number3=0;

    }
    return 0;

}
