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