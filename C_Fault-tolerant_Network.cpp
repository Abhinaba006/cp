#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second
#define mod 1000000007
#define md 998244353
#define INF INT_MAX
#define vl vector<ll>
#define vi vector<int>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define vpl vector<pl>
#define vpi vector<pi>
#define ml map<ll, ll>
#define mi map<int, int>
#define m(a, b) map<a, b>
#define rep(i, s, n) for (int i = s; i < n; i++)
#define mxn 100005
#define printfloat(y) cout << fixed << setprecision(9) << y << endl;
#define YesNo(f)               \
    if (f)                     \
    {                          \
        cout << "YES" << endl; \
    }                          \
    else                       \
    {                          \
        cout << "NO" << endl;  \
    }
#define setval(a, val) memset(a, val, sizeof(a))
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define new1(n) \
    int n;      \
    cin >> n;
#define new2(n, k) \
    int n, k;      \
    cin >> n >> k;
#define new3(a, b, c) \
    int a, b, c;      \
    cin >> a >> b >> c;
#define new4(a, b, c, d) \
    int a, b, c, d;      \
    cin >> a >> b >> c >> d;
#define Arr(arr, n) \
    ll arr[n];      \
    rep(i, 0, n) cin >> arr[i];
// long long min(long long a, long long b) { return a < b ? a : b; }
void solve()
{
    // code here
    new1(n);
    Arr(a, n);
    Arr(b, n);
    ll a0 = INF, b0 = INF, an = INF, bn = INF;
    rep(i, 0, n)
    {
        a0 = min(a0, abs(a[0] - b[i]));
        b0 = min(b0, abs(a[i] - b[0]));
    }
    for (int i = n - 1; i >= 0; i--)
    {
        an = min(an, abs(a[n - 1] - b[i]));
        bn = min(bn, abs(a[i] - b[n - 1]));
    }
    ll a0b0 = abs(a[0] - b[0]);
    ll anbn = abs(a[n - 1] - b[n - 1]);
    ll a0bn = abs(a[0] - b[n - 1]);
    ll anb0 = abs(a[n - 1] - b[0]);
    ll ans = INF;
    ans = min(a0 + an + b0 + bn,
              min(a0b0 + an + bn,
                  min(a0bn + an + b0,
                      min(anbn + a0 + b0,
                          min(anb0 + a0 + bn,
                              min(anbn + a0b0, anb0 + a0bn))))));
    cout << ans << endl;
}
int main()
{
    fastIO;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
