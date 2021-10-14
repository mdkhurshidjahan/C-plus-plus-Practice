
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,p,count=0;
    cin>>n>>p;
    int a[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]<p)
            count++;
    }
    cout<<count<<"\n";
    return 0;
}
