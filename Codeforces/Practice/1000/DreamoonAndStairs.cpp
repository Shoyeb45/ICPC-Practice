#include<bits/stdc++.h>
using namespace std;
#define range(x) (x).begin(), (x).end()
#define NFS ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
template<typename T> void debug(string v1, T t1) { cout << v1 << ": " << t1 << "\n"; }
template<typename T, typename K> void debug(string v1, T t1, string v2, K t2) { cout << v1 << ": " << t1 << " " << v2 << ": " << t2 << "\n"; }
const ll mod = 1000000007;

int n, m;
void solve() {
    cin >> n >> m;
    
    if (n == 0 || (n == 1 && m > 1)) {
        cout << -1 << "\n";
        return;
    }

    int total = (n + 1) / 2;
    int numTwo = (((n & 1) == 1) ? total - 1: total);

    while (numTwo) {
        if (total % m == 0) {
            cout << total << "\n";
            return;
        }
        numTwo--;
        total++;
        if (total % m == 0) {
            cout << total << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}

int main() {
    NFS
     #ifndef ONLINE_JUDGE
        freopen("E:\\Code\\CompetitveProgramming\\stdin-stdout-stderr\\input.in", "r", stdin);
        freopen("E:\\Code\\CompetitveProgramming\\stdin-stdout-stderr\\output.out", "w", stdout);
        freopen("E:\\Code\\CompetitveProgramming\\stdin-stdout-stderr\\error.out", "w", stderr);
    #endif
    int tt;
    tt = 1;
    // cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}