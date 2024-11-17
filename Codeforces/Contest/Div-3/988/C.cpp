#include<bits/stdc++.h>
using namespace std;
#define range(x) (x).begin(), (x).end()
#define NFS ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
template<typename T> void debug(string v1, T t1) { cout << v1 << ": " << t1 << "\n"; }
template<typename T, typename K> void debug(string v1, T t1, string v2, K t2) { cout << v1 << ": " << t1 << " " << v2 << ": " << t2 << "\n"; }
const ll mod = 1000000007;

int n;
void solve() {
    cin >> n;
    if (n <= 4) {
        cout << -1 << "\n";
        return;
    }

    if (n % 2 == 0) {
        for (int i = n; i >= 2; i -= 2) {
            if (i != 4) {
                cout << i << " ";
            }
        }
        cout << 4 << " " << 5 << " ";
        for (int i = 1; i <= n - 1; i += 2) {
            if (i != 5) {
                cout << i << " ";
            }
        } 
        cout << "\n";
    }
    else {
        for (int i = n - 1; i >= 2; i -= 2) {
            if (i != 4) {
                cout << i << " ";
            }
        }
        cout << "4 5 ";
        for (int i = 1; i <= n; i += 2) {
            if (i != 5) {
                cout << i << " ";
            }
        } 
        cout << "\n";
    }
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
    cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}