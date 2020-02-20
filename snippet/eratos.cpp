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