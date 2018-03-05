#include <iostream>
#include <cstdlib>
#include <time.h>


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
      for(int i=input.length()-1,count1=0; i>=0 && isdigit(input[i]) && count1<arraysize; i--,digits++,count1++)
        {
          num[count1]=input[i]-'0';
        }
      if(input[0]=='-')
        negative=true;
      else
        negative=false;
    }
    void print()
    {
      if(negative==true)
        cout<<"-";
      for(int i=digits-1; i>=0 ; i--)
        {
          cout<<num[i];
        }

      cout<<endl;
    }

    bignum operator+(bignum ano)
    {
      bignum temp;

      for(int i=0; i<max(ano.digits,digits) && i<arraysize; i++)
        {

          temp.num[i]+=num[i]+ano.num[i];
          temp.num[i+1]=temp.num[i]/10;
          temp.num[i]%=10;

        }
      temp.digits=max(ano.digits,digits);
      if(temp.num[temp.digits]!=0)
        temp.digits++;

      return temp;
    }
    bignum operator-(bignum ano)
    {
      bignum temp;
      temp=*this;
      if(temp.compare(ano)=="<")
        {
          for(int a=0; a<ano.digits; a++)
            {
              temp.num[a]=ano.num[a]-temp.num[a];
              if(temp.num[a]<0)
                {
                  temp.num[a]+=10;
                  temp.num[a+1]--;
                }
            }
          temp.negative=true;
        }
      else
        {
          for(int a=0; a<temp.digits; a++)
            {
              temp.num[a]-=ano.num[a];
              if(temp.num[a]<0)
                {
                  temp.num[a]+=10;
                  temp.num[a+1]--;
                }
            }
        }
      for(int i=temp.digits-1; i>=0 && temp.num[i]==0; i--)
        {
          temp.digits--;
        }

      return temp;
    }

    bignum operator*(bignum ano)
    {
      bignum temp,output;
      int a,b;

      for(a=0; a<ano.digits; a++)
        {
          temp=bignum("0");

          for(b=0; b<digits; b++)
            {
              temp.num[a+b]+=num[b]*ano.num[a];
              temp.num[a+b+1]=temp.num[a+b]/10;
              temp.num[a+b]=temp.num[a+b]%10;

              //cout<<temp.num[a+b]<<endl;
              // cout<<temp.num[a+b+1]<<endl;
              //temp.print();
            }
          temp.digits=a+b+1;

          if(temp.num[temp.digits-1]==0)
            temp.digits--;

          output=output+temp;


        }

      return output;

    }
    bignum operator*(int a)
    {
      string b="";
      b+=char(a+'0');
      for(int i=0;i<c;i++)
      {
        b+="0";
      }
      bignum temp1=*this,temp2(b);

      return temp1*temp2;
    }
    bignum operator/(bignum ano)
    {
      bignum temp;
      string a="";

      for(int i=digits-ano.digits-1;i>=0;i--,temp.digits++)
      {

        for(int d=1;compare(ano)==">" && d<10;d++)
        {
          temp.num[i]=d;
          //cout<<temp.num[i]<<endl;
          cout<<"  "<<compare(ano*d)<<endl;
          (ano*d).print();
        }

      }
      return temp;

    }
    string compare(bignum ano)
    {
      if(digits>ano.digits)
        return ">";
      if(digits<ano.digits)
        return "<";
      if(digits==ano.digits)
        {
          for(int a=digits-1,b=ano.digits-1; a>=0 && b>=0; a--,b--)
            {
              if(num[a]>ano.num[b])
                return ">";
              if(num[a]<ano.num[b])
                return "<";
              if(a==0 && b==0)
                return "=";

            }
        }
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
          (x+y).print();
        }
      else if(oper=="-")
        {
          (x-y).print();
        }

      else if(oper=="*")
        {
          (x*y).print();
        }
      else if(oper=="/")
        {
          (x/y).print();
        }


    }
  return 0;
}
