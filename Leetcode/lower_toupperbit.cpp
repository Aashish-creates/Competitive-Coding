#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(char i='A';i<='Z';i++)
    {
        char a=i | ' ';//i|' ';
        cout<<a;
    }
    cout<<endl;
   for(char j='a';j<='z';j++)
   {
    char b=j&'_';//j&'_';
    cout<<b;
   }
   return 0;

}