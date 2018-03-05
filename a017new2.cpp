#include<iostream>
#include<cstdlib>


using namespace std;

string a;

int number=0,operatorlength=0,operandlength=0,operatorcount=0,operandcount=0;
int operators[1000]= {0};
int operands[1000]= {0};

void getnum(int operatoroffset,int operandoffset)
{
 int b=operandoffset,a;

 for(a=operatoroffset; a<operatorlength; a++)
  {

   for(int i=0; operators[a]!='+' && operators[a]!='-' && operators[a]!=0; i++)
    {
     if(operators[a]=='*')
      {
       operands[b-i]*=operands[b+1];
       operands[b+1]=0;
       operators[a]=0;

      }
     else if(operators[a]=='/')
      {
       operands[b-i]/=operands[b+1];
       operands[b+1]=0;
       operators[a]=0;

      }
     else if(operators[a]=='%')
      {
       operands[b-i]%=operands[b+1];
       operands[b+1]=0;
       operators[a]=0;

      }
     a++;
     b++;
    }
   b++;
  }

 b=operandoffset;

 for(a=operatoroffset; a<operatorlength; a++)
  {
   if(operators[a]=='+')
    {
     operands[operandoffset]+=operands[b+1];
     operands[b+1]=0;
     operators[a]=0;

    }
   else if(operators[a]=='-')
    {
     operands[operandoffset]-=operands[b+1];
     operands[b+1]=0;
     operators[a]=0;

    }
   b++;

  }
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
       operands[operandlength++]=number;
       i-=1;

      }
     else
      {
       if(a[i]!=' ')
        {
         if(a[i]==')')
          {
           for(int d=operatorlength-1; operators[d]!='(' && d>=0; d--)
            {
             operatorcount++;
             operandcount++;
            }
           getnum(operatorlength-operatorcount,operandlength-operandcount-1);
           operators[operatorlength-operatorcount-1]=0;
           operatorlength-=operatorcount+1;
           operandlength-=operandcount;
           operatorcount=0;
           operandcount=0;

          }
         else
          operators[operatorlength++]=a[i];

        }
      }
    }
   getnum(0,0);
   cout<<operands[0]<<endl;
  }

 return 0;

}
