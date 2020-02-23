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
typedef ll ll;
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
const int MAX = 510000;
const int MOD = 1000000007;

ll fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void comb_init()
{
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++)
    {
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
ll comb(int n, int k)
{
    if (n < k)
        return 0;
    if (n < 0 || k < 0)
        return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
// 負の数にも対応した % 演算
ll mod(ll val, ll m)
{
    ll res = val % m;
    if (res < 0)
        res += m;
    return res;
}
// a^n mod を計算する
ll modpow(ll a, ll n, ll mod)
{
    ll res = 1;
    while (n > 0)
    {
        if (n & 1)
            res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
// a^{-1} mod を計算する
ll modinv(ll a, ll m)
{
    ll b = m, u = 1, v = 0;
    while (b)
    {
        ll t = a / b;
        a -= t * b;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    u %= m;
    if (u < 0)
        u += m;
    return u;
}
//from char to int
ll ctoi(char c)
{
    ll i = c - 48;
}
//素数列挙
vector<ll> eratosthenes_sieve(ll n)
{
    vector<ll> table(n + 1, 0);
    vector<ll> prime_list(0);
    for (ll i = 2; i <= n; i++)
    {
        if (!table[i])
        {
            prime_list.push_back(i);
            for (ll j = 2; j <= n / i; j++)
            {
                table[i * j] = 1;
            }
        }
    }
    return prime_list;
}
//素数判定
bool is_prime(ll X)
{
    for (ll i = 2; i <= ll(sqrt(X)); i++)
    {
        if (X % i == 0)
        {
            return false;
        }
    }
    return true;
}
//平方数判定
bool is_square(ll N)
{
    if (ll(sqrt(N)) * ll(sqrt(N)) == N)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//各位の和の計算
ll sum_of_digits(ll num)
{
    ll sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
//文字カウント
ll mojicnt(vector<char> str, char X)
{
    count(str.cbegin(), str.cend(), X);
}
// にぶたん
// index が条件を満たすかどうか
bool isOK(int index, int key)
{
    if (a[index] >= key)
        return true;
    else
        return false;
}

// 二分探索
int binary_search(int key)
{
    int left = -1;             //「index = 0」が条件を満たすこともあるので、初期値は -1
    int right = (int)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while (right - left > 1)
    {
        int mid = left + (right - left) / 2;

        if (isOK(mid, key))
            right = mid;
        else
            left = mid;
    }

    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    return right;
}
//pairの2個目逆順sort用
bool pairCompare(const P &firstElof, const P &secondElof)
{
    return firstElof.second > secondElof.second;
}
//ベクトルの積集合
vector<ll> set_product(vector<ll> v1, vector<ll> v2)
{
    vector<ll> ret(0);
    for (ll i : v1)
    {
        if (find(v2.begin(), v2.end(), i) != v2.end())
        {
            ret.push_back(i);
        }
    }
    return ret;
}
//from string to vector<char>
vector<char> stov(string s)
{
    vector<char> v(all(s));
    return v;
}
//from decimal to binary
string itob(ll j)
{
    return bitset<10>(j).to_string();
}
//max of vector
ll vmax(vector<ll> v)
{
    return *max_element(all(v));
}
//min of vector
ll vmin(vector<ll> v)
{
    return *min_element(all(v));
}
//sum of vector
ll vsum(vector<ll> v)
{
    return accumulate(all(v), (ll)0);
}
int main()
{

    return 0;
}