#include <iostream>

using namespace std;

int main() {
    int a;
    while(cin>>a) {
        if(a==1) {
            cout<<"1 1\n";
        }
        else {
            long sumf=1;
            long sumg=1;
            for(long b=2;b<=a;b++) {
                sumf+=b;
                sumg+=sumf;
            }
            cout<<sumf<<" "<<sumg<<"\n";
        }
    }
}
