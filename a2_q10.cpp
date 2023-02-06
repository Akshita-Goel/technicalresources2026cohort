#include<iostream>
using namespace std;
int main() {
    for(int row=1;row<=5;row++) {
        if (row<3) {
           for(int s=1;s<=3-(row);s++) {
              cout<<" ";
           }
           cout<<"*";
        }
        for(int s=1;s<=(row-1);s=s+1) {
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
        }
        else if (row>3) {
            for(int s=1;s<=(row-3);s++)
            cout<<" ";
        cout<<"*";
            for(int s=1;s<=(5-(row));s=s+1)
            {cout<<" ";
        cout<<"*";
        }
        cout<<endl;
        }
        else if(row=3) {
        for(int s=1;s<=3-(row);s++)
            cout<<" ";
        cout<<"*";
        for(int s=1;s<=(row);s++)
            cout<<" ";
        cout<<"*";
        cout<<endl;
        }
   }
   return 0;
}
