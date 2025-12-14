/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/10/31, Time: 17:08:58
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    faster
    int n, k; cin >> n >> k;
    int mxXor = 0, mxAnd = 0, mxOr  = 0;
    for (int a = 1; a < n; ++a){
        for(int b = a + 1; b <= n; ++b){
            int res1 = (a & b), res2 = (a ^ b), res3 = (a | b);
            if (res1 < k) mxAnd = max(mxAnd, res1);
            if (res2 < k) mxXor = max(mxXor, res2);
            if (res3 < k) mxOr = max(mxOr, res3);
        }
    }
    cout << mxAnd << '\n' << mxOr << '\n' << mxXor << endl;
}