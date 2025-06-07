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

int introTutorial(int V, std::vector<int> arr)
{
    auto it = std::lower_bound(arr.begin(), arr.end(), V);
    if (it != arr.end() && *it == V)
        return it - arr.begin();
    else
        return -1;
}

int introTutorial1(int V, std::vector<int> arr)
{
    auto it = std::lower_bound(arr.begin(), arr.end(), V);
    if (it != arr.end() && *it == V)
        return it - arr.begin();
    else
        return -1;
}


int introTutorial2(int V, vector<int> arr)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int median = (left + right) / 2;
        if (arr[median] == V)
            return median;
        else if (arr[median] < V)
            left = median + 1;
        else
            right = median - 1;
    }

    return -1;
}


int introTutorial3(int V, vector<int> arr)
{
    auto index = std::find(arr.begin(), arr.end(), V);
    return index - arr.begin();
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string V_temp;
    getline(cin, V_temp);

    int V = stoi(ltrim(rtrim(V_temp)));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = introTutorial(V, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}


