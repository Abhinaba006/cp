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
void solve(){
    // code here
    string s;
    cin>>s;
    int n=s.size();
    unordered_map<char,int> mf, mll;
    rep(i, 0, n){
        mf[s[i]]=max(mf[s[i]], i);
    }
    rep(i, 0, n){
        mll[s[i]]=min(mll[s[i]], i);
    }
    int i=0, j=n;
    while(i<j){
        if(mf[s[i]]>i){
            j=min(mf[s[i]], j);
        }
        i++;
    }
    int p=0, q=n-1;
    while(p>q){
        if(mll[s[q]]<q){
            p=max(mll[s[q]], p);
        }
    }
    if(j>=q){
        cout<<-1<<endl;
        return;
    }
    cout<<q-j+1<<endl;
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
