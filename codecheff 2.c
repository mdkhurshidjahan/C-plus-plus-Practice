#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,x,y;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        cin>>str;
        int maxday=0,count=0,ans=0;
        for(int i=0; i<30; i++)
        {
            if(str[i]=='1')
                {
                    ans+=x;
                    count++;
                }
            else
                {
                    maxday = max(count,maxday);
                    count=0;
                }
        }
        maxday=max(count,maxday);
        ans+=maxday*y;
        cout<<ans<<"\n";;
    }
    return 0;
}
