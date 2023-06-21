#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin>>s;
    int o=s.length();

    cout<<endl;

    if((s[0]=='/'&&s[1]=='/')||(s[0]=='/'&&s[1]=='*')&&(s[o-2]=='*'&&s[o-1]=='/'))
    {
        cout<<"comment line"<<endl;

    }
    else
    {
        cout<<"not comment line"<<endl;

    }


}
