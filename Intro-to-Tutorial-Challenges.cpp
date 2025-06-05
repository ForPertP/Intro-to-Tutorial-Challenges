#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'introTutorial' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER V
 *  2. INTEGER_ARRAY arr
 */

int introTutorial(int V, vector<int> arr)
{
    auto index = std::find(arr.begin(), arr.end(), V);
    return index - arr.begin();
}


int introTutorial(int V, vector<int> arr)
{
    int left = 0;
    int right = arr.size() - 1;
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

