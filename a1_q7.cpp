#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout<<"enter the no. whose inverse is to be found: ";
    cin >> n;
    
    int counter = 1;
    int ans = 0;
    while(n != 0){
        int r = n % 10;
        n /= 10;
        ans += counter * pow(10,r-1);
        counter++;
    }
    cout<<ans<<endl;
    return 0;
}

