#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        if (row<=int(n/2) || row==n)
        {
            cout<<"* ";
            for(int s=1;s<=int(n/2)+1;s++)
            cout<<"  ";
            cout<<"* ";
        }

        else
        {
            cout<<"* ";
            for (int s= (n/2)-1; s >= -((n/2)-1); s--)
            {   
                if (row-(n/2)-1 == abs(s))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
