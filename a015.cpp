#include <iostream>
#include <cstdlib>

using namespace std;
int main() {

    int a, b;
    while(cin>>a>>b) {

        cout<<"ewrr";
        int c[a][b];
        int out[b][a];
        for(int i=0; i<a; i++) {
            for(int x=0; x<b; x++) {
                cin>>c[i][x];

            }
        }
        for(int i=0; i<a; i++) {
            for(int x=0; x<b; x++) {
                out[x][i] = c[i][x];
            }
        }
        for(int i=0; i<b; i++) {
            for(int x=0; x<a; x++) {
                cout<<out[i][x]<<" ";

            }
            cout<<"\n";
        }


    }


}
