#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

static const int arraysize=500;

class bignum
{
  public:

    int digits=0;
    bool negative;
    int num[arraysize]= {0};

    bignum()
    {
      digits=0;
    }

    bignum(string input)
    {
      for(int i=input.length()-1,count1=arraysize-1; i>=0 && isdigit(input[i]); i--,digits++,count1--)
        {
          num[count1]=input[i]-'0';
        }
    }
    void print()
    {
      for(int i=arraysize-digits; i<arraysize ; i++)
        {
          cout<<num[i];
        }

      cout<<endl;
    }

    bignum operator+(bignum ano)
    {
      bignum temp;
      bool add=false;

      for(int i=arraysize-1,count2=0; count2<digits || count2<ano.digits; i--,count2++)
        {
          add=false;
          temp.num[i]+=num[i]+ano.num[i];

          if(temp.num[i]>=10)
            {
              add=true;

            }
          temp.num[i-1]=temp.num[i]/10;
          temp.num[i]%=10;

          temp.digits++;

        }
      if(add==true)
        temp.digits++;

      return temp;
    }
    bignum operator-(bignum ano)
    {
      bignum temp;


    }
    bignum operator*(bignum ano)
    {
      bignum temp,output;
      int a,b,count1=0,count2=0;
      bool add=false;

      for(a=arraysize-1,count1=0; count1<ano.digits; a--,count1++)
        {
          temp=bignum("0");
          temp.digits=count1;

          for(b=arraysize-1,count2=0; count2<digits; b--,count2++)
            {
              add=false;
              temp.num[a+b-arraysize+1]+=num[b]*ano.num[a];
              if(num[b]*ano.num[a]>=10)
                {
                  temp.num[a+b-arraysize]=num[b]*ano.num[a]/10;
                  temp.num[a+b-arraysize+1]=num[b]*ano.num[a]%10;
                  add=true;
                }

              temp.digits++;
              //cout<<temp.digits<<endl;
            }
          if(add==true)
            temp.digits++;

          output=output+temp;

        }

      return output;

    }
    bignum operator/(bignum ano)
    {
      bignum temp;

    }

};

int main()
{
  string a,b,oper;
  bignum output,x,y;

  while(cin>>a>>oper>>b)
    {
      x=bignum(a);
      y=bignum(b);

      if(oper=="+")
        {
          output=x+y;
          output.print();
        }

      else if(oper=="*")
        {
          output=x*y;
          output.print();
        }



    }



  return 0;
}
