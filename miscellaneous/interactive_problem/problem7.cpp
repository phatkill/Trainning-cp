/**
problem:https://codeforces.com/problemset/problem/679/A
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/18, Time: 21:28:10
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define pb push_back
#define rep(i, a, b, k) for (int i = a; i <= b; i += k)
#define per(i, a, b, k) for (int i = a; i >= b; i -= k)
vector<int> nt = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
void solve(){
    int cnt = 0;
    string ans;
    for (auto i: nt){
        if (cnt > 1) break;
        cout << i << endl;
        cin >> ans;
        if (ans == "yes"){
            cnt++;
            if (cnt > 1) break;
            rep(j, 0, 3, 1){
                if (i * nt[j] > 100) break;
                cout << i * nt[j] << endl;
                cin >> ans;
                if (ans == "yes") cnt++;
            }
        }
    }
    cout << (cnt > 1 ? "composite": "prime") << endl;
}
int main() {
    faster
    int t; t = 1;
    while(t--) solve();
}