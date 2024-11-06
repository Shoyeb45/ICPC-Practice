#include<bits/stdc++.h>
using namespace std;
#define range(x) (x).begin(), (x).end()
#define NFS ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
template<typename T> void debug(string v1, T t1) { cout << v1 << ": " << t1 << "\n"; }
template<typename T, typename K> void debug(string v1, T t1, string v2, K t2) { cout << v1 << ": " << t1 << " " << v2 << ": " << t2 << "\n"; }
const ll mod = 1000000007;

int n;

bool isPalindrome(vector<int> &a) {
    for(int i = 0; i < a.size() / 2; i++) {
        if(a[i] != a[a.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

void solve() {
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) {
        cin >> x;
    }

    if(isPalindrome(a)) {
        cout << "YES\n";
        return;
    }

    int idx = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] != a[n - i - 1]) {
            idx = i;
            break;
        }
    }

    vector<int> b;
    for(auto x : a) {
        if(x != a[idx]) {
            b.push_back(x);
        }
    }
    if(isPalindrome(b)) {
        cout << "YES\n";
        return;
    }

    b.clear();
    idx = n - idx - 1;
    for(auto x : a) {
        if(x != a[idx]) {
            b.push_back(x);
        }
    }
    if(isPalindrome(b)) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
    return;
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