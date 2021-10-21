
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,x,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>p;
        if(((x*3)-(n-x))>=p)
            cout<<"PASS\n";
        else
            cout<<"FAIL\n";
    }
    return 0;
}
