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


int introTutorial2(int V, vector<int> arr)
{
    int left = 0;
    int right = arr.size();
    int median = 0;
    int index = 0;
    
    while (left <= right)
    {
        median = (left + right) / 2;
        if (arr[median] == V)
        {
            index = median;
            break;
        }
        else if (arr[median] < V)
        {
            left = median + 1;
        }
        else
        {
            right = median - 1;
        }
    }
    
    return index;
}

/*
return Arrays.binarySearch(arr,V);

    int left = 0;
    int right = arr.length;
    int median,index=0;
    while(left<=right)
    {
        median = (left+right)/2;
        if(arr[median]==V)
        {
            index=median;
            break;
        }
        else if(arr[median]<V)
            left = median + 1;
        else
            right = median - 1;
    }
    return index;
*/
