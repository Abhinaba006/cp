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
    int arr[n];     \
    rep(i, n) cin >> arr[i];
void printMatrix(int *mat, int n, int m)
{
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            cout << *(mat +(i*m) + j) << " ";
        }
        cout << endl;
    }
}
void solve()
{
    // code here
    new4(n, m, x1, y1);
    new2(x2, y2);
    x1--;
    y1--;
    x2--;
    y2--;
    int mat[n][m];
    memset(mat, 0, sizeof(mat));
    mat[x1][y1] = 1;
    mat[x2][y2] = 2;
    int odd, even;
    if ((x1 + y1) % 2 == (x2 + y2) % 2)
    {
        // problem
        if (y1 - 1 >= 0)
            mat[x1][y1 - 1] = 4;
        if (x1 - 1 >= 0)
            mat[x1 - 1][y1] = 4;
        if (y1 + 1 < m)
            mat[x1][y1 + 1] = 4;
        if (x1 + 1 < n)
            mat[x1 + 1][y1] = 4;
        if ((x1 + y1) % 2==0)
            odd = 1, even = 2;
        else odd = 2, even = 1;
    }
    else
    {
        if ((x1 + y1) % 2)
            odd = 1, even = 2;
        else
            even = 1, odd = 2;
    }
    rep(i, 0, n){
        rep(j, 0, m){
            if(mat[i][j]==0){
                if((i+j)%2) mat[i][j] = odd;
                else mat[i][j] = even;
            }
        }
    }
    // cout<<odd<<" "<<even<<endl;
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
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
