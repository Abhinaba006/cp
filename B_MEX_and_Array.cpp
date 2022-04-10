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
int noOfZero(int arr[], int n)
{
    int ans = 0, p = 1;
    int i = 0;
    while (i < n)
    {
        if (arr[i] == 0)
        {
            while (arr[i] == 0)
                i++;
            ans++;
        }
        else
            i++;
    }
    rep(j, 0, n-1){
        if((arr[j]==0 && arr[j+1]!=0) || (arr[j]!=0 && arr[j+1]==0)) p++;
    }
    cout<<"all elem of arr ";
    rep(j, 0, n) cout<<arr[j]<<" ";
    cout<<" || ";
    cout<<ans<<" "<<p<<endl;
    return ans + p;
}
void solve()
{
    // code here
    // new1(n);
    // Arr(arr, n);
    int n=2, arr[]={1, 2};
    int ans = 0;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            ans += noOfZero(arr+j, i-j);
        }
    }
    cout<<ans<<endl;
    // int a[] = {1, 2};
    // cout<<noOfZero(a, 2)<<endl;
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
