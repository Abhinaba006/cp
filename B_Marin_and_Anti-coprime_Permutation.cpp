#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second
#define mod 1000000007
#define INF INT_MAX
#define vl vector<ll>
#define vi vector<int>
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vpl vector<pl>
#define vpi vector<pi>
#define ml map<ll,ll>
#define mi map<int,int>
#define m(a,b) map<a,b>
#define rep(i, s, n) for(int i=s;i<n;i++)
#define mxn 100005
#define printfloat(y) cout<<fixed<<setprecision(9)<<y<<endl;
#define YesNo(f) if(f){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define setval(a,val) memset(a,val,sizeof(a)) 
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define new1(n) long long n;cin >> n;
#define new2(n, k) int n, k;cin >> n >> k;
#define new3(a, b, c) int a, b, c;cin >> a >> b >> c;
#define new4(a, b, c, d) int a, b, c, d;cin >> a >> b >> c >> d;
#define Arr(arr, n) int arr[n]; rep(i, n)  cin>>arr[i];
#define int ll
int md = 998244353;

int factorial(int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = (ans*i)%md;
    }
    return ans;
}
int power(long long x, unsigned int y, int p)
{
    int res = 1;
    x = x % p; 
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
void solve()
{
    // code here
    new1(n);
    if (n % 2)
    {
        cout << 0 << endl;
        return;
    }
    
    int ans = factorial(n / 2) % md;
    int f = power(ans, 2, md);
    cout << f << endl;
}
int_fast32_t main()
{
    fastIO;
    int t = 1;
    cin>>t;
    while(t--)  solve();
    // cout << factorial(665702330 / 2) << endl;
    return 0;
}
