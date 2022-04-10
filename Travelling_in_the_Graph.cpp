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
int dijkstra(vector<vector<pi>>& graph, int n){
    vector<int> dist(n, INF);
    dist[0] = 0;
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    pq.push(mp(0, 0));
    while(!pq.empty()){
        pi u = pq.top();
        pq.pop();
        // int u_dist = u.F;
        int u_node = u.S;
        // if(u_dist > dist[u_node]) continue;
        for(pi v : graph[u_node]){
            int v_node = v.F;
            int v_dist = v.S;
            if(dist[v_node] > dist[u_node] + v_dist){
                dist[v_node] = dist[u_node] + v_dist;
                pq.push(mp(dist[v_node], v_node));
            }
        }
    }
    // rep(i, 0, n){
    //     cout<<dist[i]<<" ";
    // }
    return dist[n-1];
}
void solve(){
    // code here
    new2(n, m);
    vector<vector<pi>> g(n);
    vi present(n, 0);
    rep(i, 0, m){
        new2(u, v);
        u--, v--;
        g[u].pb({v, 0});
        g[v].pb({u, 0});
        if(abs(u-v) == 1){
            present[min(u, v)] = 1;
        }
    }
    // cout<<"hi"<<endl;
    rep(i, 0, n-1){
        if(!present[i]){
            g[i].pb({i+1, 1});
            g[i+1].pb({i, 1});
        }
    }
    int ans=dijkstra(g, n);
    cout<<ans<<endl;
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
