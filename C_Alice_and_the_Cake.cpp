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
    ll arr[n];     \
    rep(i, 0, n) cin >> arr[i];
void printArr(int arr[], int n)
{
    rep(i, 0, n)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
vl prefixArray(int arr[], int n)
{
    vl ans(n);
    ans[0] = arr[0];
    rep(i, 1, n)
    {
        ans[i] = ans[i - 1] + arr[i];
    }
    return ans;
}
const int maxL = 2e5 + 5;
void solve()
{
    // code here
    new1(n);
    Arr(arr, n);
    sort(arr, arr + n, greater<ll>());
    ll sum = accumulate(arr, arr + n, 0ll);
    int i = 0;
    priority_queue<ll> pq;
    pq.push(sum);
    while (pq.size())
    {
        ll temp = pq.top();
        // cout << "pop "<<temp<<endl;
        pq.pop();
        if(temp<arr[i]){
            cout<<"NO"<<endl;
            return;
        }
        else if (temp == arr[i])
        {
            i++;
        }
        else
        {
            pq.push(temp/2);
            // cout<<"pushing "<<temp/2<<endl;
            if (temp % 2)
            {
                // cout<<"pushing "<<temp/2+1<<endl;
                pq.push(temp / 2 + 1);
            }
            else
            {
                // cout<<"pushing "<<temp/2<<endl;
                pq.push(temp/2);
            }
        }
        sum--;
    }
    YesNo(i == n);
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
