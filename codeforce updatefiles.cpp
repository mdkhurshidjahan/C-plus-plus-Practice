
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long a=1,b=0;
        while(a<=k && a<n)
        {
            a=a*2;
            b++;
        }
        if(a<n)
        {
            b=b+(n-a+k-1)/k;
        }
        cout<<b<<"\n";
    }
    return 0;
}
