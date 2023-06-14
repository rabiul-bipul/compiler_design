#include<bits/stdc++.h>
using namespace std;


void Tokenization(string s)
{

    int id=0,op=0,cons=0,punc=0;

    for(int  i=0; i<s.length(); i++)
    {
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='=')
        {
            op++;
        }


        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')||s[i]=='_')
        {
            id++;
        }

        if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'||s[i]=='0')
        {
            cons++;
        }

        if(s[i]==';'||s[i]==','||s[i]=='('||s[i]==')'||s[i]=='{'||s[i]=='}'||s[i]=='['||s[i]==']')
        {
           punc++;
        }

    }

    cout<<"Identifier = "<<id<<endl;
    cout<<"Operator = "<<op<<endl;
    cout<<"Constant = "<<cons<<endl;
    cout<<"Punctuation = "<<punc<<endl;

}

int main()
{
    string s;
    cin>>s;
    cout<<endl;
    Tokenization(s);
}
