#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int a,b,c,i;
    cin>>a>>b>>c;
    for(i=a; i<=b; i++)
    {
        if(i==(c*2))
        {
            cout<<i<<"\n";
            return 0;
        }
        else if(i==c)
        {
            cout<<i<<"\n";
            return 0;
        }
        else if(i==0)
        {
            cout<<i<<"\n";
            return 0;
        }
    }
    cout<<"-1"<<"\n";
    return 0;
}
