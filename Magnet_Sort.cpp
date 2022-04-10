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
#define new1(n) ll n;cin >> n;
#define new2(n, k) int n, k;cin >> n >> k;
#define new3(a, b, c) int a, b, c;cin >> a >> b >> c;
#define new4(a, b, c, d) int a, b, c, d;cin >> a >> b >> c >> d;
#define Arr(arr, n) ll arr[n]; rep(i, 0, n)  cin>>arr[i];
void solve(){
    // code here
    new1(n);
    Arr(arr, n);
    int fake[n];
    rep(i, 0, n) fake[i] = arr[i];
    sort(fake, fake+n);
    string s;
    cin >> s;
    if(is_sorted(arr, arr+n)){
        cout<<0<<endl;
    }
    else{
        int ns=0;
        rep(i, 0, n){
            if(s[i]=='S'){
                ns++;
            }
        }
        if(ns==0 || ns==n){
            cout<<-1<<endl;
            return;
        }
        int i=0, j=n-1;
        while(i<j && s[i]==s[j]){
            if(arr[i]==fake[i]) i++;
            else if(arr[j]==fake[j]) j--;
            else{
                // cout<<"s[i] "<<s[i]<<" "<<s[j]<<endl;
                cout<<2<<endl;
                return;
            }
        }
        cout<<1<<endl;
        return;
    }
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
