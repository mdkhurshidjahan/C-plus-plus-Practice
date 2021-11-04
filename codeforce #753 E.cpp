
#include <bits/stdc++.h>
#define N 200005
using namespace std;
int num;
int number, most;
string st;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >>num;
	while( num-- ){
		cin >> number >> most;
		cin >> st;
		int lll = 1, dds = most, le = 1, router = number, temp = 1;
		for(int i = 0; i < st.size(); i++){
		    if( st[i] == 'L'){
		        if( lll == most ){
		            cout << le << " " << lll << "\n";
                temp= 0;
    break;
        }
		        lll++;
        dds++;
        }else if( st[i] == 'R'){
		        if( dds== 1 ){
		            cout << le << " " << dds << "\n";
		            temp=0;
		            break;
		        }
            dds--;
lll--;
		    }else if( st[i] == 'U'){
            if( le == number ){
		            cout << le << " " << lll << "\n";
		            temp=0;
		            break;
		        }
		        le++;
		        router++;
		    }else{
		        if( router==1 ){
            cout << router << " " << lll << "\n";
		            temp=0;
            break;
		        }
        router--;
        le--;
		    }
    }
    if(temp){
		    cout<<le<< " " << lll << "\n";
		}
	}
return 0;
}
