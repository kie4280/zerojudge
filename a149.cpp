#include <iostream>

using namespace std;

int main() {
    int num;
    string a;
    cin>>num;
    for(int i=0; i<num; i++) {
        cin>>a;
        int output=1;
        for(int x=0; x<a.length(); x++) {
            output*=a[x]-'0';
        }
        cout<<output<<"\n";

    }
    return 0;



}
