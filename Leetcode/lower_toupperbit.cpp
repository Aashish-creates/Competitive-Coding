#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(char i='A';i<='Z';i++)
    {
        char a=i | (1<<5);
        cout<<a;
    }
    cout<<endl;
   for(char j='a';j<='z';j++)
   {
    char b=j&(~(1<<5));
    cout<<b;
   }
   return 0;

}