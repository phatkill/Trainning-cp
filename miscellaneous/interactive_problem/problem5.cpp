/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/17, Time: 15:13:06
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

int main() {
    faster
    int cnt = 0;
    vector<int> a = {2, 3, 5, 7};
    int product = 1;
    for (auto i: a){
        cout << "Q " << i << endl;
        cin >> cnt;
        product *= pow(i, cnt);
    }
    cout << "! " << product;
}