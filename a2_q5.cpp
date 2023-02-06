#include<iostream>
using namespace std;
int main() {

    for(int row=1;row<=5;row++) {
        if(row<=3) {
           for(int s=1;s<=(3-row);s++) {
               cout<<"  ";
           }
           for(int col=1;col<=(2*row-1);col++) {
              cout<<"*";
           }
           cout<<endl;
        }
        else {
           for(int s=1;s<=(row-3);s++) {
              cout<<" ";
           }
           for(int col=1;col<=(11-2*row);col++) {
              cout<<"*";
           }
           cout<<endl;
       }
   }
    return 0;
}
