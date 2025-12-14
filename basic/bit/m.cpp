/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/01, Time: 20:58:18
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(a) a.begin(), a.end()
int main() {
    faster
    string a; cin >> a;
    int pos = a.find('0');
    (pos != -1) ? a.erase(pos, 1): a.erase(0, 1);
    cout << a << endl;
}