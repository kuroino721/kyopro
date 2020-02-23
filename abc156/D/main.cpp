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
#include <unistd.h>

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
const ll MOD = 1000000007;
long long modpow(long long a, long long n, long long mod)
{
    long long res = 1;
    while (n > 0)
    {
        if (n & 1)
            res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
long long modinv(long long a, long long mod)
{
    return modpow(a, mod - 2, mod);
}
ll comb(ll n, ll r)
{
    ll bunshi = 1;
    ll bunbo = 1;
    rep(i, r)
    {
        bunshi = bunshi * (n - i) % MOD;
        bunbo = bunbo * (r - i) % MOD;
    }
    return ((bunshi % MOD) * modinv(bunbo, MOD)) % MOD;
}
long long mod(long long val, long long m)
{
    long long res = val % m;
    if (res < 0)
        res += m;
    return res;
}
int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll miner = 1 + comb(n, a) + comb(n, b);
    cout << mod(modpow(2, n, MOD) - miner, MOD) << endl;
    return 0;
}
