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
    ll n, k;      \
    cin >> n >> k;
#define new3(a, b, c) \
    int a, b, c;      \
    cin >> a >> b >> c;
#define new4(a, b, c, d) \
    int a, b, c, d;      \
    cin >> a >> b >> c >> d;
#define Arr(arr, n) \
    int arr[n];     \
    rep(i, 0, n) cin >> arr[i];
ll prefixSum[mxn];
ll xorString(string &s, ll start, ll end)
{
    if (start == 0)
    {
        return prefixSum[end] % 2;
    }
    return (prefixSum[end] - prefixSum[start - 1]) % 2;
}
bool rec(string &s, ll start, ll n, ll k, ll x)
{
    ll cnt = 0, i;
    for (i = 0; i < n-1; i++)
    {
        if (xorString(s, start, i) == x)
        {
            cnt++;
            start = i + 1;
        }
        if (cnt == k - 1)
            break;
    }
    if (cnt == k - 1)
    {
        return xorString(s, start, n - 1) == x;
    }
    return false;
}
void solve()
{
    // code here
    new2(n, k);
    string s;
    cin >> s;
    memset(prefixSum, 0LL, sizeof(prefixSum));
    prefixSum[0] = s[0] == '1';
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + (s[i] == '1');
    }
    YesNo(rec(s, 0, n, k, 0) || rec(s, 0, n, k, 1));
}
int main()
{
    fastIO;
    int t = 1;
    cin>>t;
    while (t--)
        solve();
    return 0;
}
