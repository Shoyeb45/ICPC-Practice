#include<bits/stdc++.h>
using namespace std;
#define loop(i, n) for(int i = 0; i < n; i++)
#define range(x) (x).begin(), (x).end()
#define NFS ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
const ll mod = 1000000007;

int x, y, k;
void solve() {
    cin >> x >> y >> k;

    for(int i = 1; i <= k / 2; i++) {
        cout << x + i << " " << y << '\n';
        cout << x - i << " " << y << "\n";
    }

    if(k % 2 == 1) {
        cout << x << " " << y << '\n';
    }
}

int main() {
    NFS
    int tt;
    tt = 1;
    cin >> tt;

    while (tt--) {
        solve();
    }
    
    return 0;
}
