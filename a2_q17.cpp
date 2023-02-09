#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int row=1;row<=n;row++) {
        if(row<=int(n/2)) {
            for(int s=1;s<=int(n/2);s++) {
                cout<<" ";
            }
            for(int c=1;c<=row;c++) {
                cout<<"*";
            }
        }
        else if(row==int(n/2)+1) {
           for(int c=1;c<=2*row-1;c++) {
               cout<<"*";
           }
        }
        else if(row>int(n/2)) {
            for(int s=1;s<=int(n/2);s++) {
                cout<<" ";
            }
            for(int c=1;c<=(n+1)-row;c++){
            cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
