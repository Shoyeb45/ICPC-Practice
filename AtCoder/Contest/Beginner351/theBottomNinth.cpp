#include<bits/stdc++.h>
using namespace std;
#define loop(i, n) for(int i = 0; i < n; i++)
typedef long long ll;
const ll mod = 1000000007;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll sumT = 0;
    loop(i, 9) {
        int x;
        cin >> x;
        sumT += x;
    }
    ll sumA = 0;
    loop(i, 8) {
        int x;
        cin >> x;
        sumA += x;
    }
    cout << (sumT - sumA + 1) << endl;
    return 0;
}
