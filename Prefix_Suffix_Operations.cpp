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
#define Arr(arr, n) int arr[n]; rep(i, 0, n)  cin>>arr[i];
// freeze with time
void freezer(vector<vector<int>>&g, int idx, int t, vi &visited, vi &state){
    if(t==0)    return;
    for(auto x:g[idx]){
        if(visited[x]==0){
            visited[x]=1;
            if(state[x]==0) freezer(g, x, t-1, visited, state);
        }
    }
}
void solve(){
    // code here
    new3(n, m, q);
    vector<vector<int>> adj(n);
    vi state(n, 0);
    rep(i, 0, m){
        new2(a, b);
        a--;
        b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    rep(i, 0, q){

        new1(a);
        if(a==1){
            new1(b);
            b--;
            state[b]=1;
        }else if(a==2){
            new1(b);
            vi visited(n, 0);
            rep(i, 0, n){
                if(state[i]) freezer(adj, i, b, visited, state);
            }
            rep(i, 0, n){
                if(state[i]==0){
                    state[i]=visited[i];
                }
            }
        }else{
            new1(b);
            b--;
            YesNo(state[b]);
        }
    }
}
int main()
{
    fastIO;int t=1;
    // cin>>t;
    while(t--)  solve();
    return 0;
}
