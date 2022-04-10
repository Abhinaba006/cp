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
vector<vector<int>> inputMatrix(int m, int n) {
    vector<vector<int>> matrix(n, vector<int>(m));
    rep(i, 0, n) rep(j, 0, m) cin >> matrix[i][j];
    return matrix;
}
void snake(vector<vector<int>> &matrix){
    int n = matrix.size();
    for(int i=1;i<n;i+=2){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
void cyclicRotate(vi &a, int k){
    int n = a.size();
    k = k%n;
    reverse(a.begin(),a.end()-k);
    reverse(a.end()-k, a.end());
    reverse(a.begin(),a.end());
}
void solve(){
    // code here
    new2(n, m);
    vector<vector<int>> matrix=inputMatrix(n, m);
    snake(matrix);
    vi a;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a.pb(matrix[i][j]);
        }
    }
    new1(k);
    cyclicRotate(a, k);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i*m+j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    fastIO;int t=1;
    // cin>>t;
    while(t--)  solve();
    return 0;
}
