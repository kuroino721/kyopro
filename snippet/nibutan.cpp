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
