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