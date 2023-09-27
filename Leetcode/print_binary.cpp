#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=29;
    for(int i=10;i>=0;--i)
    {
        cout<<((a>>i)&1);
    }
    cout<<endl;
    return 0;
}