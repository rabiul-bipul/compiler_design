#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int op=1;
    cin>>s;
    cout<<endl;


    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='=')
        {
            cout<<"operator"<<op<<":"<<s[i]<<endl;
            op++;
        }
    }
