#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

string a;

int number=0,operatorlength=0,operandlength=0;
int operators[100]= {0};
int operands[100]= {0};

int getnum(int operatoroffset,int operandoffset)
{
  int b=0,a=0;

  for(a=0; a<operatorlength; a++)
    {
      if(operators[a]=='*')
        {
          operands[b]*=operands[b+1];
          operands[b+1]=0;
          operators[a]=0;
          //b+=2;

        }
      else if(operators[a]=='/')
        {
          operands[b]/=operands[b+1];
          operands[b+1]=0;
          operators[a]=0;
          //b+=2;

        }
      else if(operators[a]=='%')
        {
          operands[b]%=operands[b+1];
          operands[b+1]=0;
          operators[a]=0;
          b+=2;

        }
        b++;
    }
  b=0;

  for(a=0; a<operatorlength; a++)
    {
      if(operators[a]=='+')
        {
          operands[0]+=operands[b+1];
          operands[b+1]=0;
          operators[a]=0;

        }
      else if(operators[a]=='-')
        {
          operands[0]-=operands[b+1];
          operands[b+1]=0;
          operators[a]=0;

        }
      b++;

    }
  return operands[0];

}


int main()
{
  while(getline(cin,a))
    {
      operatorlength=0;
      operandlength=0;

      for(int i=0; i<a.length(); i++)
        {
          if(isdigit(a[i])==true)
            {
              number=0;

              for(; isdigit(a[i]); i++)
                {
                  number*=10;
                  number+=(a[i]-'0');

                }
              i-=1;
              operands[operandlength++]=number;

            }

          else
            {
              operators[operatorlength++]=a[i];


              /*if(a[i]=='(')
              {
                 for(int i=operatorlength; operators[i]!='('; i--)
                {

                }
              }

              //cout<<operands[operandlength-1]<<endl;
              */
            }
        }
      cout<<getnum(0,0)<<endl;
    }

  return 0;

}
