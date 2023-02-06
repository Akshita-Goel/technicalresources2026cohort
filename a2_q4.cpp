#include<iostream>
using namespace std;
int main() {
      int n;
      cin>>n;
      int x=0;
      int y=n;
      for(int i=1; i<=n; i++) {
          for(int j=1; j<=x; j++) {
               cout<<" ";
          }
          for(int j=1; j<=y; j++) {
               cout<<"*";
          }
          x++;
          y--;
         cout<<endl;
      }
      return 0;
}
