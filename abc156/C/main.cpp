#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <iterator>
#include <numeric>
#include <bitset>
#include <cassert>
#include <functional>

using namespace std;
typedef long long ll;
using Graph = vector<vector<ll>>;
typedef pair<ll, ll> P;
inline ll min(ll x, ll y) { return x < y ? x : y; }
inline ll max(ll x, ll y) { return x > y ? x : y; }

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define all(c) c.begin(), c.end()
#define pb push_back
#define fs first
#define sc second
#define show(x) cout << #x << " = " << (x) << endl
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)

int main()
{
    ll N;
    cin >> N;
    vector<ll> X(N);
    rep(i, N) cin >> X[i];
    ll xtotal = accumulate(all(X), (ll)0);
    double P = (double)xtotal / N;
    if ((P - floor(P)) >= 0.5)
    {
        P = ceil(P);
    }
    else
    {
        P = floor(P);
    }
    double ans = 0;
    rep(i, N)
    {
        ans += pow(X[i] - P, 2);
    }
    cout << ans << endl;
    return 0;
}
