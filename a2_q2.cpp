#include<iostream>
using namespace std;
int main() {
    int n,a=0,b=1;
    cin>>n;
    cout<<a<<endl;
    cout<<b<<" "<<b<<endl;
    a=1;
    for(int row=3; row<=n; row++)
    {
        for(int col=1;col<=row;col++)
        {
            int c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
        cout<<endl;
    }
    return 0;
}
      
