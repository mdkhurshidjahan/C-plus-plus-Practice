
#include <bits/stdc++.h>



using namespace std;
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int st;
    cin >> st;
    while(st--) {
        string alpha;
        cin >> alpha;
        string s;
        cin >> s;
        map<char,int> index;
        for(int i = 0 ; i < alpha.length() ; i++) {
            index[alpha[i]]=i;
        }
        int res=0;
        for(int i = 0 ; i < (int)s.length()-1 ; i++) {
            res += abs(index[s[i]]-index[s[i+1]]);
        }
        cout << res << '\n';
    }
    return 0;
}
