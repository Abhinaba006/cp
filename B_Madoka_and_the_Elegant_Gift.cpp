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
// #define m(a,b) map<a,b>
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

void dfs(vector<string> &v, int i, int j){
    if(i<0 || i>=v.size() || j<0 || j>=v[0].size() || v[i][j]!='1') return;
    v[i][j] = 'q';
    dfs(v, i+1, j);
    dfs(v, i-1, j);
    dfs(v, i, j+1);
    dfs(v, i, j-1);
}

void solve(){
    // code here
    new2(n, m);
    vector<string> v(n);
    rep(i, 0, n) cin>>v[i];
  
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='1'){
                ans++;
                dfs(v, i, j);
            }
        }
    }
    if(ans==1){
        
    }
    YesNo(ans>=2 || ans==0);
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
