bool is_prime(int X)
{
    for (int i = 2; i <= int(sqrt(X)); i++)
    {
        if (X % i == 0)
        {
            return false;
        }
    }
    return true;
}