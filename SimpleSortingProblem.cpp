#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}
int main() {

    int n, i;
    cin >> n;
    vector<string> arr;
    string item;
    while(n--)
    {
        cin >> item;
        arr.push_back(item);
    }
    sort(arr.begin(), arr.end(), cmp);
    for (auto x : arr)
        cout << x << endl;
    return 0;
}
