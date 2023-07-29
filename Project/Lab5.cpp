#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


void functionCheck(string r, string n,string p)
{
    string a[9]= {"void","int","string","float","double"};


    if(a[0]==r||a[1]==r||a[2]==r||a[3]==r||a[4]==r)
    {

        bool isProperlyDeclared = true;

        if (!isalpha(n[0]) && n[0] != '_')
        {
            isProperlyDeclared = false;
            if(n[0]=='1'||n[0]=='2'||n[0]=='3'||n[0]=='4'||n[0]=='5'||n[0]=='6'||n[0]=='7'||n[0]=='8'||n[0]=='9'||n[0]=='0')
            {
                cout<<endl;
                cout<<"Name Start With a Number!!"<<endl;
                cout<<endl;
            }
            else if(n[0]=='!'||n[0]=='@'||n[0]=='#'||n[0]=='$'||n[0]=='%'||n[0]=='^'||n[0]=='&'||n[0]=='*')
            {
                cout<<endl;
                cout<<"Name Start With a Special Symbol!!"<<endl;
                cout<<endl;
            }
        }
        else
        {
            for (size_t i = 1; i < n.length(); ++i)
            {
                if (!isalnum(n[i]) && n[i] != '_')
                {
                    isProperlyDeclared = false;
                    if(n[i]=='!'||n[i]=='@'||n[i]=='#'||n[i]=='$'||n[i]=='%'||n[i]=='^'||n[i]=='&'||n[i]=='*')
                    {
                        cout<<endl;
                        cout<<"Function Name Contain Special Symbol !!"<<endl;
                        cout<<endl;
                    }
                    break;
                }
            }
        }

        if (isProperlyDeclared)
        {
            if(p=="()")
            {
                cout<<endl;
                cout << "The Function name is properly declared." << endl;
            }
            else
            {
                cout<<endl;
                cout << "The Function name is not properly declared." << endl;

            }


        }
        else
        {
            cout<<endl;
            cout << "The Function name is not properly declared." << endl;
        }
    }
    else
    {
        cout<<endl;
        cout << "The Function name is not properly declared." << endl;


    }

}


void checkVar(string s)
{

    bool isProperlyDeclared = true;

    if (!isalpha(s[0]) && s[0] != '_')
    {
        isProperlyDeclared = false;
        if(s[0]=='1'||s[0]=='2'||s[0]=='3'||s[0]=='4'||s[0]=='5'||s[0]=='6'||s[0]=='7'||s[0]=='8'||s[0]=='9'||s[0]=='0')
        {
            cout<<endl;
            cout<<"Name Start With a Number!!"<<endl;
            cout<<endl;
        }
        else if(s[0]=='!'||s[0]=='@'||s[0]=='#'||s[0]=='$'||s[0]=='%'||s[0]=='^'||s[0]=='&'||s[0]=='*')
        {
            cout<<endl;
            cout<<"Name Start With a Special Symbol!!"<<endl;
            cout<<endl;
        }
    }
    else
    {
        for (size_t i = 1; i < s.length(); ++i)
        {
            if (!isalnum(s[i]) && s[i] != '_')
            {
                isProperlyDeclared = false;
                if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^'||s[i]=='&'||s[i]=='*')
                {
                    cout<<endl;
                    cout<<"Variable Name Contain Special Symbol !!"<<endl;
                    cout<<endl;
                }
                break;
            }
        }
    }

    if (isProperlyDeclared)
    {
        cout<<endl;
        cout << "The variable name is properly declared." << endl;
    }
    else
    {
        cout << "The variable name is not properly declared." << endl;
    }
}

int main()
{
    int option;
    string s;
    cout<<"Choose The Option - "<<endl;
    cout<<"----------------------"<<endl;
    cout<<endl;
    cout<<"1.Variable Declaration "<<endl;
    cout<<endl;
    cout<<"2.Function Declaration "<<endl;
    cout<<endl;
    cout<<"3.Function Definition "<<endl;
    cout<<endl;
    cout<<"----------------------"<<endl;
    cout<<endl;
    cin>>option;

    switch(option)
    {
    case 1:
        cout<<endl;
        cout << "Enter a variable name: ";
        cin >> s;
        checkVar(s);
        break;


    case 2:
        cout << "Declare a Function : ";
        string rt,n,p;
        cin >> rt>>n>>p;
        functionCheck(rt,n,p);
        cout<<endl;
        break;

        /*    case 3:
                cout<<"N/A";
                cout<<endl;
                break;*/
    }



    getch();
    return 0;
}

