
#include <bits/stdc++.h>



using namespace std;
class Codeforce753 {
public:
    multiset<long long> st;
    long long delta;

    long long fetch() {
        return (*st.begin()) + delta;
    }

    void decrease(long long x) {
        delta -= x;
    }

    void add(long long x) {
        st.insert(x - delta);
    }

    void left() {
        st.erase(st.begin());
    }
};




int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    long long c;
    cin >> c;
    while(c--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(long long i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        multiset<long long> ms(a.begin(),a.end());
        Codeforce753 obj;
        for(long long i = 0 ; i < n ; i++) {
            obj.add(a[i]);
        }
        sort(a.begin(),a.end());
        long long sum=a[0];
        for(long long i = 0 ; i < n ; i++) {
            long long counter = obj.fetch();
            sum = max(sum,counter);
            obj.decrease(counter);
            obj.left();
        }
        cout << sum << '\n';
    }
    return 0;
}
