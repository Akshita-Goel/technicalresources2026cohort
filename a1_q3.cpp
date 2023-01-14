#include<iostream>
using namespace std;
int main()
{
    int num,i,count=0;
    cout<<"enter number you want to know as prime:";
    cin>>num;
    for(i=2;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count>0){
        cout<<"not a prime number";
    }
    else{
        cout<<"a prime number";
    } 
    return 0;
}
