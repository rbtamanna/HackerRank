#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss="";
    cin>>s;
    if(s[8]=='A' && s[0]=='1' && s[1]=='2')
    {
        s[0]='0';
        s[1]='0';
    }
    if(s[8]=='P' && s[0]=='0')
    {
        if(s[1]=='1')
        {
            s[0]='1';
            s[1]='3';
        }
        else if(s[1]=='2')
        {
            s[0]='1';
            s[1]='4';
        }
        else if(s[1]=='3')
        {
            s[0]='1';
            s[1]='5';
        }
        else if(s[1]=='4')
        {
            s[0]='1';
            s[1]='6';
        }
        else if(s[1]=='5')
        {
            s[0]='1';
            s[1]='7';
        }
        else if(s[1]=='6')
        {
            s[0]='1';
            s[1]='8';
        }
        else if(s[1]=='7')
        {
            s[0]='1';
            s[1]='9';
        }
        else if(s[1]=='8')
        {
            s[0]='2';
            s[1]='0';
        }
        else if(s[1]=='9')
        {
            s[0]='2';
            s[1]='1';
        }
    }
    if(s[8]=='P' && s[0]=='1')
    {
        if(s[1]=='0')
        {
            s[0]='2';
            s[1]='2';
        }
        else if(s[1]=='1')
        {
            s[0]='2';
            s[1]='3';
        }
    }
    for(int i=0; i<8; i++)
    {
        ss+=s[i];
    }
    cout<<ss<<'\n';
}