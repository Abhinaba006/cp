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
#define md 998244353 
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
#define new1(n) int n;cin >> n;
#define new2(n, k) int n, k;cin >> n >> k;
#define new3(a, b, c) int a, b, c;cin >> a >> b >> c;
#define new4(a, b, c, d) int a, b, c, d;cin >> a >> b >> c >> d;
#define Arr(arr, n) int arr[n]; rep(i, n)  cin>>arr[i];
ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
void solve(){
    // code here
    new1(n);
    vl a, b;
    rep(i, 0, n){
        ll x;
        cin>>x;
        if(i%2) a.pb(x);
        else b.pb(x);
    }
    ll agcd=a[0];
    rep(i, 1, a.size()){
        agcd = gcd(agcd, a[i]);
    }
    ll bgcd=b[0];
    rep(i, 1, b.size()){
        bgcd = gcd(bgcd, b[i]);
    }
    ll ans=0, af=0, bf=0;
    ll j=0, k=0;
    rep(i, 0, n){
        if(i%2) {if(a[j++]%bgcd==0){
            bf=1;
        }}
        else {if(b[k++]%agcd==0){
            af=1;
        }}
    }
    if(af && bf) ans=0;
    else ans = af?bgcd:agcd;
    cout<<ans<<endl;
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
