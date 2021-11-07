int introTutorial(int V, vector<int> arr)
{
    int i = 0;
    int n = arr.size() - 1;

    while (i <= n)
    {
        int m = (i + n) / 2;
        
        if (arr.at(m) == V)
        {
            return m;
        }
        else if (arr.at(m) > V)
        {
            n = m - 1;
        }
        else
        {
            i = m + 1;
        }
    }

    return 0;
}
