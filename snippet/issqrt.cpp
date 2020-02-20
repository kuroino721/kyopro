bool isSquare(ll N)
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