#include<iostream>
using namespace std;
int main()
{
    int digits=0, num;
    cout<<"Enter the number: ";
    cin>>num;
    do{
        digits++;
        num=num/10;
    }
    while (num>0);
    cout<<"Number of digits: ";
    cout<<digits;
    return 0;
}
