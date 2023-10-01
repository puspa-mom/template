#include <bits/stdc++.h>
using namespace std;

#define endl '\n' // fast output
#define taken(x) int x;cin >> x;
#define takes(x) string x;cin >> x;
#define newl cout << endl
#define dtb(n,x) bitset<n>(x).to_string //decimal to binary of x in n bits 

#define uint unsigned int
#define int long long
#define f(i, a, b) for (int i = a; i < b; i++)
#define rv(i, a, b) for (int i = a; i >= b; i--)
#define via(n) vector<int> a(n)
#define all(a) (a).begin(), (a).end()
#define clr(x) memset(x, 0, size_setof(x))
#define printl(a) cout << a << endl
#define print(a) cout << a << " "
// #define pnx cout << endl       // redfined as newl
#define ufill(a, n) f(i, 0, n) cin >> a[i]
#define pii pair<int, int>
#define pdd pair<double, double>
#define fr first
#define sc second
#define pb push_back
#define pob pop_back
#define pm(a, b) make_pair(a, b)
#define ushow(v, n) f(i, 0, n) print(v[i])
template <typename T, typename T1>
T amax(T &a, T1 b)
{
    if (b > a)
        a = b;
    return a;
}

template <typename T, typename T1>
T amin(T &a, T1 b)
{
    if (b < a)
        a = b;
    return a;
}
const int M = 998244353;
const int N = 1e5 + 7;
int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}
int lcm(int a, int b)
{
    return ((a * b) / gcd(a, b));
}
bool compair(pair<int, int> a, pair<int, int> b)
{
    if (a.fr == b.fr)
    {
        return a.sc > b.sc;
    }
    return a.fr < b.fr;
}

/* ...................................................................................... */
/**
    ifstream in ("shell.in");
    ofstream out ("shell.out");
    //when this active cin changes to in and cout to out
**/

/****
 * initilizing arrays assuming single test case
 *  2^30 is nearly equal to 10^9
 *  you forget to check symbols and implement your logic
 *  check output format carefully , in general try to be more aware
 * .size_set() is unisigned it , so calculation with it requires caution
 * check condition of loop/recur is dynamic / staic
 * messed with variable names
 * x%2 == -1 , if s is odd and < 0
 */
int binExp(int a , int b){ // a^b
    int ans = 1;
    while(b>0){
        if(b&1)ans *= a;
        a = a*a;
        b = (b >>1);
    }
    return ans;
}




void solve()
{

}
/* .................................................................................... */
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
/**/
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout); //prevent infinite output
#endif
    /**/

    // clock_t s=clock();
    int _t;cin >> _t;while (_t--)
        solve();
    // clock_t e=clock();
    // cout<<setprecision(10);
    // cout<<"Ttime taken="<<double(e-s)/double(CLOCKS_PER_SEC)<<endl;
    return 0;
}
