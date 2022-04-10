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
bool myComp(pi a, pi b)
{
    if (a.S == b.S)
        return a.F > b.F;
    return a.S < b.S;
};
int dp[mxn], path[mxn];
double rec(int a[], int b[], int n, int i, int taken = 0)
{
    if (i == n)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    if (b[i] > taken)
    {
        // path[i] = 0;
        dp[i] = 0;
        return dp[i];
    }

    double withIt = a[i] + rec(a, b, n, i + 1, taken + 1);
    double withOutIt = rec(a, b, n, i + 1, taken);
    // if (a[i] == -1)
    // {
    //     cout << "taken for -1 " << taken << "withit " << withIt << endl;
    // }
    if(withIt > withOutIt)
    {
        dp[i] = withIt;
        path[i] = 1;
        return withIt;
    }
    else
    {
        dp[i] = withOutIt;
        // path[i] = 0;
        return withOutIt;
    }
}
void solve()
{
    // code here
    new1(n);
    Arr(a, n);
    Arr(b, n);
    memset(dp, -1, sizeof(dp));
    memset(path, -1, sizeof(path));
    double ans = rec(a, b, n, 0);
    // cout<<" path : ";
    vpi v;
    for (int i = 0; i < n; i++)
    {
        if (path[i] == 1)
        {
            v.pb(mp(a[i], b[i]));
        }
    }
    // sort(v.begin(), v.end(), myComp);
    ans = 0;
    int cnt = 0;
    // prin path
    for (int i = 0; i < n; i++)
        cout << path[i] << " ";
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].F<<" "<<v[i].S<<endl;
        // if (ans <= (double)(ans + v[i].F) / (cnt + 1))
        // {
        //     // cout<<"selected "<<v[i].F<<endl;
        //     ans = (double)(ans + v[i].F) / (cnt + 1);
        //     cnt++;
        // }
    }
    printfloat(ans);
}
int main()
{
    fastIO;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
