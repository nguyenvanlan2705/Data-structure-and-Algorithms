#include <bits/stdc++.h>
using namespace std;

string changeCase(string str)
{
    for(int i=0; i<=str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+= 0x20;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            str[i]-= 0x20;
        }
    }
    return str;
}

int main()
{
    string b = "Hello";
    vector<string> c;
    //cout<<b;
    string a;
    a= changeCase(b);
    //cout<<"\n"<<a;
    c.push_back(a);
    c.push_back(" ");
    c.push_back(b);
    for(string s:c){
        cout<<s;
    }

}