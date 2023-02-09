#include<iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   for(int i=1; i<=n; i++) {
       for(int sp=1; sp<=i-1; sp++) {
            cout<<" ";
       }
   int last_col= (n*2 - (2*i-1));
   for(int j=1; j<=last_col; j++) {
         if(i==1) {
             cout<<"*";
         }
         else if(j==1) {
             cout<<"*";
         }
         else if(j==last_col) {
             cout<<"*";
         }
         else {
             cout<<" ";
         }

         int i=0, j=0, k=0;
         while(i<n) {
             while(k<=n-i-2) {
                 cout<<" ";
                 k++;
             }
             k=0;  
             while(j<2*i-1) {
                 cout<<"*";
                 j++;
             }
             j=0;
             i++;
             cout<<endl;
         }
   return 0;
}
