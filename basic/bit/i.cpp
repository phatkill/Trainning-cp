/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/01, Time: 17:47:13
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
const ll MOD = 1e9 + 7;
int main() {
    faster
    int n; cin >> n;
    auto power =[&](){
        ll res = 1, a = 2;
        while (n){
            if (n & 1) res *= a;
            a *= a;
            a %= MOD;
            res%= MOD;
            n >>= 1;
        }
        return res;
    };
    cout << power();
}