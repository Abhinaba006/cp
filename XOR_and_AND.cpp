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
#define mxn 31
#define printfloat(y) cout<<fixed<<setprecision(9)<<y<<endl;
#define YesNo(f) if(f){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define setval(a,val) memset(a,val,sizeof(a)) 
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define new1(n) int n;cin >> n;
#define new2(n, k) int n, k;cin >> n >> k;
#define new3(a, b, c) int a, b, c;cin >> a >> b >> c;
#define new4(a, b, c, d) int a, b, c, d;cin >> a >> b >> c >> d;
#define Arr(arr, n) ll arr[n]; rep(i, 0, n)  cin>>arr[i];
ll dp[mxn];
void powerOfTwo()
{
    ll i = 1, j = 0;
    dp[0] = 1;
    while(i < mxn)
    {
        dp[i] = dp[i-1]*2;
        i++;
    }
}
void solve(){
    // code here
    new1(n);
    Arr(arr, n);
    sort(arr, arr+n);
    // rep(i, 0, n)
    // {
    //     cout<<dp[i]<<" ";
    // }
    ll ans=0;
    for(ll i=0;i<n;i++){
            ll till = upper_bound(dp, dp+mxn, arr[i]) - dp;
            // cout<<dp[till]<<" i "<<i<<" ";
            // cout<<lower_bound(arr, arr+n, dp[till]) - arr<<endl;
            ans += lower_bound(arr, arr+n, dp[till]) - arr - i - 1;

        // for(int j=i+1;j<n;j++){
        //     // cout<<"dptill "<<dp[till]<<endl;
        //     if(arr[j] < dp[till]){
        //         ans++;
        //         // cout<<arr[i]<<" "<<arr[j]<<endl;
        //     }
        // }
    }
    cout<<ans<<endl;
}
int main()
{
    fastIO;int t=1;
    powerOfTwo();
    cin>>t;
    while(t--)  solve();
    return 0;
}
