#include <iostream>
using namespace std;
int main(){
  int n,m,sum,count;
  while (cin >> n){
    cin >> m;
    sum=0;
    count=0;
    if (m >=0){
      while (sum<=m){
        sum=sum+n;
        count++;
        n++;
      }
      cout <<count<<endl;
    }else {
      cout << 1 <<endl;
    }
  }
  //system("pause");
}
