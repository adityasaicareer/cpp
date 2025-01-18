#include <iostream>
using namespace std;
int main()
{
    string s="aditya";
    cout<<s<<endl;
    // to get all the letters
    for(int i=1;i<=s.size();i++)
    {
        cout<<s[i-1]<<endl;
    }
    s[s.size()-1]='b';
    cout<<s<<endl;
}