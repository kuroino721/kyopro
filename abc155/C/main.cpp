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
    vector<string> S(N);
    rep(i, N)
    {
        cin >> S[i];
    }
    sort(all(S));
    vector<ll> cnt(0);      //文字列カウンタ。もともと1入れとく
    vector<string> memo(0); //文字列メモ
    int j = 0;
    cnt.pb(1);
    memo.pb(S[0]);
    rep1(i, N)
    {
        if (S[i] == S[i - 1])
        {
            cnt[j]++;
        }
        else //いきなり切り替わってもカウンタは1入る
        {
            cnt.pb(1);
            memo.pb(S[i]); //切り替わったら文字列追加
            j++;
        }
    }
    ll mxcnt = *max_element(all(cnt));
    rep(i, cnt.size())
    {
        if (cnt[i] == mxcnt)
        {
            cout << memo[i] << endl;
        }
    }
    return 0;
}
