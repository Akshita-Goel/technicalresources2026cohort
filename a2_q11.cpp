#include<iostream>
using namespace std;
int main() {
    int n;
    int a=1;
    cin>>n;
    for(int row=1;row<=n;row++) {
        for(int col=1;col<=row;col++) {
            cout<<a<<" ";
            a=a+1;
        }
        cout<<endl;
    }
    return 0;
}
