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
    rep(i, n) cin >> arr[i];
void solve()
{
    // code here
    new1(n);
    int arr[n];
    rep(i, 0, n) cin >> arr[i];
    int ans[n];
    memset(ans, -1, sizeof(ans));
    set<int> s;
    rep(i, 0, n)
    {
        s.insert(i);
    }
    rep(i, 0, n)
    {
        if (arr[i] > i + 1)
        {
            cout << -1 << endl;
            return;
        }
        if (arr[i] != -1)
        {
            if (i < n - 1)
            {
                ans[i + 1] = arr[i];
                s.erase(arr[i]);
            }
        }
    }
    int i=0;
    while(i<n && !s.empty())
    {
        if(ans[i]==-1)
        {
            ans[i]=*s.begin();
            s.erase(s.begin());
        }
        i++;
    }
    rep(i, 0, n)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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
