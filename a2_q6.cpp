#include<iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int st=n/2+1;
   cout<<n/2;
   int sp=1;
   for(int i=1;i<=n;i++){
        for(int j=1;j<=st;j++){
            cout<<"*";
        }
        for(int j=1;j<=sp;j++){
            cout<<" ";
        }
        for(int j=1;j<=st;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i < n/2 + 1){
            sp+=2;
            st--;
        }
        else {
            st++;
            sp -=2;
        }
   }
   return 0;
}
