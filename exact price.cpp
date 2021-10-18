
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int x;
    cin>>x;
    if(x==0)
        cout<<"No\n";
    else if(x%100==0)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
