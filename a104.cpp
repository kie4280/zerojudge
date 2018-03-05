#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num;
    while(cin>>num) {
        int out[num];
        int arr[num];
        for(int a=0; a<num; a++) {
            cin>>arr[a];
        }

        for(int a=0; a<num; a++) {
            out[a]=*max_element(arr, arr+num);
            *max_element(arr, arr+num)=-1;

        }
        for(int a=num-1; a>=0; a--) {

            cout<<out[a]<<" ";
        }
        cout<<"\n";


    }
}
