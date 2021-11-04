#include <bits/stdc++.h>



using namespace std;
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    long long num;
    cin >> num;
    while(num--) {
        long long se;
        cin >> se;
        long long ll;
        cin >> ll;
        vector<long long> foo;
        long long added=se;
        for(long long i = 0 ; i < 4 ; i++) {
            long long min=i+1;
            if(added&1) {
                added+=min;
            } else {
                added-=min;
            }
            foo.push_back(added);
        }
        long long temp = ll%4;

        if(temp==2 or temp==0) {
            if(temp==0)
                temp+=4;
            cout << foo[temp-1] << '\n';
        } else {
            if(temp==1) {
                ll--;
                long long llem = ll/4.0;
                if(se&1) {
                    cout << foo[temp-1]+llem*4 << '\n';
                } else {
                    cout << foo[temp-1]-llem*4 << '\n';
                }
            } else {
                ll--;
                long long llem = ll/4.0;

                if(se&1) {
                    cout << foo[temp-1]-llem*4 << '\n';
                } else {
                    cout << foo[temp-1]+llem*4 << '\n';
                }
            }
        }
    }
    return 0;
}
