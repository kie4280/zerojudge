#include<iostream>
#include<cstdlib>

using namespace std;

int s[9][9]= {{0}};


int main()
{
 string in;
 bool k=true;

 while(cin.eof()==false)
  {
   int temp[9]= {0};
   for(int a=0; a<9; a++)
    {
     getline(cin,in);
     for(int b=0; b<9; b++)
      {
       s[a][b]=in[2*b]-'0';
      }
    }

   k=true;
   for(int a=0; a<9 && k==true; a++)
    {
     for(int b=0; b<9 && k==true; b++)
      {
       temp[s[a][b]-1]=1;
      }
     for(int check=0; check<9 && k==true; check++)
      {
       if(temp[check]==0)
        k=false;
       else
        temp[check]=0;
      }

     for(int c=0; c<9 && k==true; c++)
      {
       temp[s[c][a]-1]=1;
      }
     for(int check=0; check<9 && k==true; check++)
      {
       if(temp[check]==0)
        k=false;
       else
        temp[check]=0;
      }
    }
   for(int a=0; a<3 && k==true; a++)
    {
     for(int b=0; b<3 && k==true; b++)
      {
       for(int c=0; c<3 && k==true; c++)
        {
         for(int d=0; d<3 && k==true; d++)
          {
           temp[s[a*3+c][b*3+d]-1]=1;
          }
        }
       for(int check=0; check<9 && k==true; check++)
        {
         if(temp[check]==0)
          k=false;
         else
          temp[check]=0;
        }

      }
    }

   if(k==true)
    cout<<"yes"<<endl;
   else if(k==false)
    cout<<"no"<<endl;



  }
 return 0;
}
