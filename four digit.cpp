
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string n;
    cin>>n;
    if(n.size()==4)
        cout<<n<<"\n";
    else
    {
        int a=4-n.size();
        for(int i=1; i<=a; i++)
            cout<<"0";
        cout<<n<<"\n";
    }
    return 0;
}
