#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin>>s;


    int hh,mm,ss;



    hh= (s[0]-'0')*10 + (s[1]-'0');
    mm= (s[3]-'0')*10+(s[4]-'0');
    ss=(s[6]-'0')*10+(s[7]-'0');
    if(s[8]=='A'&& hh==12)
    {
        hh=00;
    }
    else if(s[8]=='P')
    {
        if(hh==12)
        {
            hh=12;
        }
        else
        {
            hh=hh+12;
        }
    }
    if(hh<10)
        cout<<0<<hh<<":";
    else
        cout<<hh<<":";
    if(mm<10)
        cout<<0<<mm<<":";
    else
        cout<<mm<<":";
    if(ss<10)
        cout<<0<<ss;
    else
        cout<<ss;
    return 0;
}
