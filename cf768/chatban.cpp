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
inline ll fsum(ll n)
{
    return (long long)n* (n + 1) / 2;
}

void solve()
{
    // code here
    ll k = 3, x = 1;
    cin >> k >> x; // if x reached banned, need to print 2k-1 lines
    ll line = 0, v = 1;
    // try k-1 lines;
    ll l = 1, r = 2 * k - 1;
    line = 2*k-1;
    while (l <= r)
    {
        ll mid = (r + l) >> 1;
        bool over = false;
        if (mid >= k)
        {
            over = (fsum(k) + fsum(k - 1) - fsum(2 * k - 1 - mid) >= x);
        }
        else
        {
            over = fsum(mid) >= x;
        }
        if(over){
            line = mid;
            // cout<<"old r "<<r<<endl;
            r = mid - 1;
            // cout<<"new r "<<r<<endl;
        }
        else{
            // cout<<"old l "<<l<<endl;
            l = mid + 1;
            // cout<<"new l "<<l<<endl;
        }
        // cout<<"l "<<l<<" r "<<r<<" mid "<<mid<<" line "<<line<<endl;
    }
    cout << line << endl;
}
int main()
{
    fastIO;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    // cout<<fsum(5)<<" ";
    // cout<<bsum(5, 5);
    return 0;
}
