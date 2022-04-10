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
    int arr[n];     \
    rep(i, 0, n) cin >> arr[i];
int mex(vi arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i)
            return i;
    }
    return n;
}
void solve()
{
    // code here
    new1(n);
    Arr(b, n);
    vi a;
    set<int> s;
    for (auto x : b)
    {
        if (s.find(x) == s.end())
        {
            s.insert(x);
        }
    }
    for (auto x : s)
        a.pb(x);
    sort(a.begin(), a.end());
    n = a.size();
    int me = mex(a, n);
    if (me == 0)
    {
        cout << *min_element(a.begin(), a.end()) - 1 << endl;
        return;
    }
    if (me == 1)
    {
        cout << -1 << endl;
        return;
    }
    int cnt = 1, ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] == 1)
        {
            cnt++;
        }
        else
        {
            ans += cnt >= me - 1;
            cnt = 1;
        }
    }
    ans += cnt >= me - 1;

    cout << ans - 1 << endl;
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
