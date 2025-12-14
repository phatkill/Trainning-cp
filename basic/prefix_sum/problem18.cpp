/**
problem:https://codeforces.com/contest/877/problem/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/08, Time: 09:44:49
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
    faster
    string s; cin >> s; int n = s.size(); s = '0' + s;
    vector<int> preA(n + 1), preB(n + 1);
    for (int i = 1; i <= n; ++i) preA[i] = preA[i - 1] + (s[i] == 'a'), preB[i] = preB[i - 1] + (s[i] == 'b');
    int total = 0;
    for (int i = 0; i <= n; ++i){
        for (int j = i; j <= n; ++j){
            total = max(total, preA[n] - preA[j] + preB[j] - preB[i] + preA[i]);
        }
    }
    cout << total;
}