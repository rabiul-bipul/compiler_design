#include<bits/stdc++.h>
using namespace std;

void check(char c)
{

    if(isdigit(c))
    {
        cout<<"numeric constant";
    }
    else
    {
        cout<<"not numeric";
    }
}

int main()
{
    char s;

    cin>>s;
    cout<<endl;

    check(s);



}
