#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int b=0;
    cout<<endl;


    if((s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z')||s[0]=='_')
    {

        for(int i=1; i<s.length();i++)
        {
            if(s[i]!='@'||s[i]!='!'||s[i]!='#'||s[i]!='$'||s[i]!='%'||s[i]!='&'||s[i]!='*')
            {
                b=1;
            }
        }

    }


    if(b==1)
    {
        cout<<"Identifier";
    }
    else
    {
        cout<<"Not Identifier";
    }


}
