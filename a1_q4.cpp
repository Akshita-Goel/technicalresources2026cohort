#include<iostream>
using namespace std;
int main()
{
    int num,i,j,count=0;
    cout<<"enter the no. of times you want to print prime numbers: ";
    cin>>num;
    for(j=1;j<num;j++){
        for(i=2;i<j;i++){
            count=j%i;
        if(count==0)
        break;
        }
        if(count!=0)
        cout<<j<<endl;
    }
}
