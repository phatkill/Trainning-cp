/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/06, Time: 17:23:05
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
const int N = 2e5;
ll pre[N + 5];
void solve(){
    int n; cin >> n;
    cout << pre[n] << '\n';
}
int main() {
    faster
    auto sumDigit =[&](int n){
        int sum = 0;
        while (n) sum += n % 10, n /= 10;
        return sum;
    };
    for (int i = 1; i <= N; ++i){
        pre[i] = pre[i - 1] + sumDigit(i);
    }
    int t; cin >> t;
    while (t--) solve();
}